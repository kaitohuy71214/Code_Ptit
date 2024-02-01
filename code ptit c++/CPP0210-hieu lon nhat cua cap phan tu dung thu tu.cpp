#include <bits/stdc++.h>
using  namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll minus = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    continue;
                }else{
                    ll tmp = a[j] - a[i];
                    if ( tmp >= minus)
                    {
                        minus = tmp;
                    }
                }
            }
        }
        if (minus != 0)
        {
            cout << minus << endl;
        }else{
            cout << "-1" << endl;
        }
    }
}