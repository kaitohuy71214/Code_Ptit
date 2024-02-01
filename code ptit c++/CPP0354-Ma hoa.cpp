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
        vector<char> v;
        for (char x : s) {
            v.push_back(x);
        }
        int cnt = 1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == v[i + 1])
            {
                cnt++;
            }else{
                cout<<v[i]<<cnt;
                cnt = 1;
            }
        }
        cout<<endl;
    }
}