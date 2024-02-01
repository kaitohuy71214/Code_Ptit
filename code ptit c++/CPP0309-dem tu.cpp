#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        int cnt=1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i-1]==' '||s[i-1]=='\t'||s[i-1]=='\n')
            {
                if ( (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') )
                {
                    cnt++;
                }
                
            }
            
        }
        cout<<cnt<<endl;
    }
    
}