
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        bool check  = true;
        for (int i = 1; i < s.length(); i++){
            if (abs(s[i] - s[i - 1]) != 1){
                check = false;
                break;
            }
        }
        if (check){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

