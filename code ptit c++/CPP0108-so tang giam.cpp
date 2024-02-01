#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if (n == 1 || n == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if ( n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
bool increase( long long n){
    while (n >= 10)
    {
        if ( (n % 10) <= (n / 10) % 10)
        {
            return false;
            break;
        }
        n/=10;
    }
    return true;
}
bool decrease( long long n){
    while (n >= 10)
    {
        if ( (n % 10) >= (n / 10) % 10)
        {
            return false;
            break;
        }
        n/=10;
    }
    return true;
}
int main(){
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        int cnt = 0;
        int n;
        cin>> n;
        for (int i = pow(10, n-1); i < pow(10, n); i++)
        {
            if ( increase(i) || decrease(i))
            {
                if (isPrime(i))
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}