#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        cin.ignore();
        long long a[n];
        multiset<long long> ms;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            ms.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (ms.count(i) > 0)
            {
                cout<<i<<" ";
            }else{
                cout<<"-1"<<" ";
            }
        }       
        cout<<endl;
    }
    
}