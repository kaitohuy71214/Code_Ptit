#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string ma;
        getline(cin,ma);
        for (int i = 0; i < ma.length(); i++)
        {
            if (ma[i]=='0' & ma[i+1] == '8' & ma[i+2] == '4' )
            {
                i+=2;
                continue;
            }
            cout<<ma[i];
        }
        cout<<endl;
    }
    return 0;
}