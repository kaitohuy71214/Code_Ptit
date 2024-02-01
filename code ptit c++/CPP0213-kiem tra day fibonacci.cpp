
#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long x)
{
    long long s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(long long n)
{
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (isFibonacci(a[i]))
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

