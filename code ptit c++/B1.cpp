#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while (test--)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        int t;
        cin >>t;
        long long a[t];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        for (int i = 0; i < t; i++)
        {
            sum += a[i];
        }
        if (abs(sum) >= 100000000)
        {
            cout<< "YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}