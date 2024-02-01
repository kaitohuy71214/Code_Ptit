#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
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
void MinPrime(int n){
    for (int i = 2; i <= n/2; i++)
    {
        if (IsPrime(i))
        {
            if (n % i == 0)
            {
                cout << i << " ";
                break;
            }            
        }
    }
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        for (long long i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                cout << "1 ";
            }else if (i % 2 == 0)
            {
                cout << "2 ";
            }else if (IsPrime(i))
            {
                cout << i << " ";
            }else{
               MinPrime(i);
            }
            
        }
        cout << endl;
    }
    
}