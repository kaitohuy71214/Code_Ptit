#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);
        string tmp;
        vector<string> v;
        while ( ss >> tmp)
        {
           v.push_back(tmp);
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout<< v[i] << " ";
        }
        
        cout<< endl;
    }
    
}