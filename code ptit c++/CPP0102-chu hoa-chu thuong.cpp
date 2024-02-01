#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        char s;
        cin>>s;

        // if (s>=65 & s<=90 )
        // {
        //     cout<<(char) (s+32)<<endl;
        // }

        // if (s>=97 & s<=142)
        // {
        //     cout<<(char) (s-32)<<endl;
        // }

        if (islower(s))
        {
            cout<<(char)toupper(s)<<endl;
        }
        if (isupper(s))
        {
            cout<<(char)tolower(s)<<endl;
        }
        
    }
    return 0;   
}