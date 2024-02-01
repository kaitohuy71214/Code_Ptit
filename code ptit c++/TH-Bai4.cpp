#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string s;
        getline( cin ,s);
        if ( s.length() <= 100)
        {
            cout << s << endl;
        }else{
            stringstream ss(s);
            string tmp;
            string l = {};
            int cnt = 0;
            while ( ss >> tmp)
            {   
                if (l.length() + tmp.length() <= 100)
                {
                    cnt++;
                    if (cnt > 1)
                    {
                        l += " " + tmp ;
                    }else{
                        l += tmp;
                    }
                }else{
                    break;
                }
            }
            cout << l << endl;
        }
    }
}