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
        int a[10000],cnt=0;
        long long n,k,tmp;
        cin>>n>>k;
        tmp=n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            back:
            if (tmp%i==0 && isPrime(i)==1)
            {
                a[cnt]=i;
                tmp/=i;
                cnt++;
                goto back;
         
            }
        }

        if (isPrime(tmp)==1)
        {
            a[cnt]=tmp;
        }
        if (k-1<=cnt && a[k-1]!=0)
        {
            cout<<a[k-1]<<endl;
        }else cout<<"-1"<<endl;
    }
}