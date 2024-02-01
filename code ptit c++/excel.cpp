
#include <iostream>
#include <string>

using namespace std;

string solve(long long col) {
    string title;
    while (col > 0) {
        int tmp = col % 26;
        if (tmp == 0) {
            title = 'Z' + title;
            col = col / 26 - 1;
        } else {
            title = char( tmp + 64) + title;
            col /= 26;
        }
    }
    return title;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        long long col;
        cin >> col;
        string columnTitle = solve(col);
        cout << columnTitle << endl;
    }

    return 0;
}

