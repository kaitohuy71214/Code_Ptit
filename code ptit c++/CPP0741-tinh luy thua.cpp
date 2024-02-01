#include<bits/stdc++.h>
using namespace std;

long long pow( long long x, long long y, long long p){
    long long res = 1;
    while (y)
    {
        if ( y % 2 == 1)
        {
            res *= x;
            res %= p;
        }
        x *= x;
        x %= p;89
        y /= 2;
    }
    return res  ;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
      long long x, y, p;
      cin>> x >> y >> p;
      cout<< pow( x, y, p)<< endl;
    }
}    