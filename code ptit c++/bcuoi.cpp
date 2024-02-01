#include<bits/stdc++.h>
using namespace std;

void mua(int n){
    if (n >= 32 && n<=89 )
    {
        cout<<"Xuan"<<endl;
    }
    if (n>= 90 && n<=182)
    {
        cout<<"He"<<endl;
    }
    if (n>=183 && n<=275 )
    {
        cout<<"Thu"<<endl;
    }
    if ((n>= 276 && n<= 365) || ( n>= 1 && n<=31))
    {
        cout<<"Xuan"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string mien;
        getline(cin, mien);
        if (mien == "Bac")
        {
            string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            int num = stoi(tmp);
            mua(num);
        }
        }else{
            string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            int num = stoi(tmp);
            if (num >= 276 && num<= 365|| num <= 120 && num >= 1)
            {
                cout<<"Kho"<<endl;
            }else{
                cout<<"Mua"<<endl;
            }
        }
        }
    }
}