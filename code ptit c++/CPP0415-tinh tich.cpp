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
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (long long i = 0; i < m; i++)
        {
            cin>>b[i];
        }  
        long long x = *max_element(a, a + n);
        long long y = *min_element(b, b + m);
        cout<<x*y<<endl;
    }
    
}