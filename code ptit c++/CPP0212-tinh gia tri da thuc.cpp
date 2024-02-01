#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = n - 1; i >= 0; i--)
        {
            cin >> a[i];
        }
        ll sum = 0, t = 1;
        ll mod = pow(10, 9) + 7;
        for (int i = 0; i < n; i++)
        {
            sum = (sum + t * a[i]) % mod;
            t = t * x % mod;
        }
        cout << sum << endl;
    }
}