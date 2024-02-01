#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>> n>> k;
        long long a[k][n];
        multiset<long long> ms;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
                ms.insert(a[i][j]);
            }
        }
        for ( long long x : ms){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}