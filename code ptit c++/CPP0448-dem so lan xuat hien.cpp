#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, x;
        cin>> n>> x;
        long long a[n];
        multiset<long long> ms;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            ms.insert(a[i]);
        }
        if (ms.count(x) != 0)
        {
            cout<<ms.count(x)<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
}