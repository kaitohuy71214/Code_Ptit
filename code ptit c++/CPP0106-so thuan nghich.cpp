#include<iostream>
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
    cin>>t;
    while(t--){
        long long n;
        cin>> n;
        if (ThuanNghich(n)==n)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
    return 0;
}