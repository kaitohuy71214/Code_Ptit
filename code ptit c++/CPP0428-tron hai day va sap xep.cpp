#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n, m;
        cin>> n>> m;
        long long a[n], b[m];
        multiset<long long> ms;
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
            ms.insert(a[i]);
        }
        for (long long i = 0; i < m; i++)
        {
            cin>>b[i];
            ms.insert(b[i]);
        }        
        for ( long long x : ms){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}