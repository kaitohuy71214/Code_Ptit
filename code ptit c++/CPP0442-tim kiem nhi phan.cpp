#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n, x;
        cin>> n>> x;
        long long a[n];
        multiset<long long> ms;
        for (long long i = 1; i <= n; i++)
        {
            cin>>a[i];
            ms.insert(a[i]);
        }
        if (ms.find(x) != ms.end())
        {
            cout<<"1"<<endl;
        }else
        {
            cout<<"-1"<<endl;
        }
        
    }
}