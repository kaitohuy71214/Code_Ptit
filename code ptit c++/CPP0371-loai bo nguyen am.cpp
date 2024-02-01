#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'y' || s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' )
        {
            s[i] == '.';
        }else{
            cout<<"."<<s[i];
        }
        
    }
    

}