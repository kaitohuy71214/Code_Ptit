#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        multiset<int> ms;
        long long n;
        cin>>n;
        int a[n];
        for (int x : a){
            cin>>x;
            ms.insert(x);
        }
        for (int x : ms){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}