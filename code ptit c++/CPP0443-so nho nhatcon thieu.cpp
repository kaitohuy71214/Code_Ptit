#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>> n;
        long long a[n - 1];
        for (int i = 1; i <= n - 1; i++)
        {
            cin>>a[i];
        }
        for (int i = 2; i <= n - 1; i++)
        {
            if (a[i] - a[i - 1] != 1){
            cout<< (a[i] + a[i - 1]) / 2<< endl;
            break;
            }
        }  
    }
}