#include<bits/stdc++.h>
using namespace std;

long long ThuanNghich(long long n){
    long long newNumber=0;
    while (n>0)
    {
        newNumber=newNumber*10+n%10;
        n/=10;
    }
    return newNumber;
}

int main(){
    int t;
    cin >>t;
    long long sum = 0;
    for (int i = pow(10, t - 1) ; i <= pow(10, t) - 1; i++)
    {
        if (ThuanNghich(i) == i)
        {
            sum+=i;
        }   
    }
    cout<< sum ;
}



