#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if ( s[0] == s[s.length()])
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}