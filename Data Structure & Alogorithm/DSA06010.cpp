#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<ll> v;
set<int> s;

void Devide(int n) {
    while (n > 0)
    {
        s.insert( n % 10);
        n /= 10;
    }
}

void Display() {
    for ( auto x : s) cout << x << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        v.clear();
        v.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            Devide(v[i]);
        }
        Display();
        s.clear();
    }
}