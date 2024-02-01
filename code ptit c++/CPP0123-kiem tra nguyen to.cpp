#include<bits/stdc++.h>
using namespace std;

long long isPrime(long long n){
    if (n==0 || n==1)
    {
        return 0;
    }
    
        for (int i = 2; i <= sqrt(n); i++)
    {
        if ( (n%i) == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    long long n;
    cin>>n;
    if (isPrime(n)==1)
    {
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}