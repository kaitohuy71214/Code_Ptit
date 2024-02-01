#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long k;
        cin>>k;
        int sum =0;
        for (int i = 1; i <= n; i++)
        {
            sum+= (i%k);
        }
        if (k==sum)
        {
            cout<<"1"<<endl;
        }else
        {
            cout<<"0"<<endl;
        }
    }
}
