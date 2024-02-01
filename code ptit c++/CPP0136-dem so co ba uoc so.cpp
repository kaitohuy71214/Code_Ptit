#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
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
        long long n;
        cin >> n;
        int cnt = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (isPrime(i) && i * i <= n)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}