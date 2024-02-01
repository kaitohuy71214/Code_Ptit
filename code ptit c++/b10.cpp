#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        int check =0, cnt =0;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (getline(ss, tmp, '.'))
        {
            for (int i = 0; i < tmp.length(); i++)
            {
                if(!( tmp[i] >= '0' && tmp[i] <= '9') )
                {
                    check = 1;
                    break;
                }
                
            }
            
            cnt ++;
            stringstream sss(tmp);
            int num;
            sss >> num;
            if (num < 0 || num > 255)
            {
                check = 1;
                break;
            }
        }
        if (cnt == 4 && check == 0)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }   
    }
}