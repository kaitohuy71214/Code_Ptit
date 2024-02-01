#include<bits/stdc++.h>
using namespace std;

long long isPrime(long long n){
    if (n<2)
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
        long long n,tmp;
        cin>>n;
        tmp=n;
        back:
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (tmp%i==0 && isPrime(i)==1)
            {
                cout<<i<<" ";
                tmp/=i;
                goto back;
            }
        }
        if (isPrime(tmp)==1)
        {
            cout<<tmp;
        }else if (isPrime(n)==1) cout<<n;
        
        
        cout<<endl;
    }
}