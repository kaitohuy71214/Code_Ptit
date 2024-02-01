#include<bits/stdc++.h>
using namespace std;

int solve( long long n){
    if (n== 0 || n ==1)
    {
        return 1;
    }
    long long fn2 = 0, fn1 = 1;
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a, a + n, comp);
        for (int i = 0; i < k; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}