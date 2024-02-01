#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        ll a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
            
        }
        sort(v.begin(), v.end());
        cout << v[k-1] << endl;
    }
}