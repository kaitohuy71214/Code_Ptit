#include<bits/stdc++.h>
using namespace std;

int isPrime(long long n){
    if (n==0 || n==1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
    cin>>a>>b;
    if(a<=b){
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i)==1)
        {
            cout<<i<<" ";
        }
    }
    }else{
    for (int i = b; i <= a; i++)
    {
        if (isPrime(i)==1)
        {
            cout<<i<<" ";
        }
    }
    }
    cout<<endl;
    }
    
    
}
