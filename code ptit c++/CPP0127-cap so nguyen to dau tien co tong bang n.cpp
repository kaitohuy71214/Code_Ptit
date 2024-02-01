#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
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
        int tmp=0;
        for (int i = 2; i <= n/2; i++)
        {
            if (isPrime(i)==1 && isPrime(n-i)==1)
            {
                cout<<i<<" "<<n-i<<endl;
                tmp++;
                break;
            }
        }
        if(tmp==0) cout<<"-1"<<endl;
    }
}