#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>> n;
        long long a[n];
        set<long long> s;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        long long tmp = *s.begin();
        s.erase(*s.begin());
        if (!s.empty())
        {
            cout<<tmp<<" "<<*s.begin()<<endl;
        }else cout<<"-1"<<endl;
        
    }
}