#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ( s[i] >= 'A' && s[i] <= 'X' ) 
        {
            s[i] = s[i] + 2 ;
        }else{
            if( s[i] == 'Y') s[i] = 'A';
            else{
            if( s[i] == 'Z') s[i] = 'B';
            }
        }
        if ( s[i] >= 'c' && s[i] <= 'z' ) 
        {
            s[i] = s[i] - 2 ;
        }else{
            if( s[i] == 'b') s[i] = 'z';
            else{
                if( s[i] == 'a') s[i] = 'y';
            }
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s[i];
    }
}