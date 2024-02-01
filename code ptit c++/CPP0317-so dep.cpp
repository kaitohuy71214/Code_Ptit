#include<bits/stdc++.h>
using namespace std;

bool isEven(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] % 2 != 0)
        {
            return false;
            break;
        }
        return true;
    }
}

bool isReversible(string s){
    int x = s.size() - 1;
    for (int i = 0, j = x; i < x/2, j > x/2 ; i++, j--)
    {
        if (s[i] != s[j])
        {
            return false;
            break;
        }             
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (isEven(s) && isReversible(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}