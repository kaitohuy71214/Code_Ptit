#include<bits/stdc++.h>
using namespace std;

long long isPrime(long long n){
    if (n<2)
    {
        return 0;
    }
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
            break;
        }
        
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>> n;
        for (int i = 1; i <= n; i++)
        {
            if ( i == 1) cout<< "1 ";
            else if (i % 2 == 0) cout << "2 ";
            else if ( isPrime(i)) cout<< i << " ";
            else {
                for (int j = 3; j <= i/2; j++)
                {
                    if( i % j == 0) {
                        cout << j <<" ";
                        break;
                    }
                }
            }

        }
        cout<<endl;
    }  
}