#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<accumulate(a+l-1,a+r,0)<<endl;
        }
    }
}
