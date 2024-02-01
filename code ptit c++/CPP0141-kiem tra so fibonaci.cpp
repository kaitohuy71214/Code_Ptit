#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main() { 
    map<ll,bool> f; 
    ll fibo[92]; 
    fibo[0] = 0; 
    fibo[1] = 1; 
    for(int i = 2; i < 92; i++) { 
        fibo[i] = fibo[i-1] + fibo[i-2]; 
    } 
    for(int i = 0; i < 92; i++) { 
        f[fibo[i]] = true; 
    } 
    int test; 
    cin >> test; 
    while(test--) { 
        ll n; 
        cin >> n; 
        if(f[n]) { 
            cout << "YES" << endl; 
        } else { 
            cout << "NO" << endl; 
        } 
    } 
    return 0; 
}