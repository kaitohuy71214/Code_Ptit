#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
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
        int n;
        cin>>n;
        for (int i = 4; i <= n; i++)
        {
            int tmp=sqrt(i);
            if (tmp*tmp==i)
            {
                if (isPrime(tmp)==1)
                {
                    cout<<i<<" ";
                }
            }
        }
        cout<<endl;
    }
}