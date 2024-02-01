#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for (long long i=0;i<n;i++) cin>>a[i];
        sort(a+0,a+n);
        int min=abs( a[1]-a[0]);
        for (int i = 1; i < n-1; i++)
        {
            if( a[i+1]-a[i] <= min) min=a[i+1]-a[i];
        }
        cout<<min<<endl;
    }
}
