
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        int tmp = 0;
        while (tmp < s.length()) {
            int cnt = 0;
            for (int j = s.length() - 1; j > tmp; j--) {
                if (s[tmp] == s[j]) {
                    s.erase(j, 1);
                    cnt++;
                }
            }
            if (cnt == 0) tmp++;
            else s.erase(tmp, 1);
        }
        cout << s << endl;
    }
    return 0;
}

