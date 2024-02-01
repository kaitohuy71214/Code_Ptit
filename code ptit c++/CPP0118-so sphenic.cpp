#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if( n < 2) return false;
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

bool isSphenic(int n){
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime(i))
        {
            if ( n % i == 0)
            {
                cnt++;
            }
            if ( isPrime(n/i) ) cnt++;
            if((n / i) % i == 0 || cnt > 3) {
                return false;
                break;
            }
        }
    } 
    if (cnt == 3) return true;
    else return false;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ( isSphenic(n)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    
}