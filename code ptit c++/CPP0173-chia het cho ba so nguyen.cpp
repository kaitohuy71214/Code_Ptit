#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll numbers(ll n){
    ll cnt = 0;
    while (n > 0)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}
ll lcm( ll a, ll b){
    return (a * b) / __gcd(a, b);
}
int main(){
    int test;
    cin >> test;
    while (test--)
    {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll mul = lcm(x, y);
        mul = lcm( mul, z);
        if ( numbers(mul) == n)
        {
            cout << mul << endl;
        }else if ( numbers(mul) > n)
        {
            cout << "-1"  << endl;
        }else{
            ll tmp = pow(10,n - 1);
            ll div = tmp / mul;
            if ( mul * div == tmp){
                cout << tmp << endl;
            }else{
                cout << mul * (div + 1) << endl;
            }
        }    
    }
}