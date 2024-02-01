#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool IsPrime(int n){
    if (n < 2)
    {
        return false;
    }else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if ( n % i == 0)
            {
                return false;
                break;
            }            
        }
    }
    return true;
}

int main(){
    int q;
    cin >> q;
    while (q--)
    {
        ll l, r, cnt = 0;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            if ( IsPrime(i))
            {
                cnt++;
            }   
        }
        cout << cnt << endl;
    }
    
}