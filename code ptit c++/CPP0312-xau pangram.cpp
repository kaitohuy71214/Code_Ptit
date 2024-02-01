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
        int k;
        cin>>k;
        cin.ignore();
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]=1;
        }
        int cnt=0;
        for(auto x : mp){
            if (x.second == 1)
            {
                cnt++;
            }
        }
        if (k >= 26 - cnt)
        {
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }        
    }
    
}