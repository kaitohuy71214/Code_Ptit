#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    set<string> ss;
    while (n--)
    {
        string s;
        getline(cin, s);
        ss.insert(s);
    }
    cout<<ss.size();
}