#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        int cnt = 0;
        for (int i = 1; i <= x; i++)
        {
            if ( __gcd(i,x) == 1)
            {
                cnt++;
            }     
        }
        if (IsPrime(cnt))
        {
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
}