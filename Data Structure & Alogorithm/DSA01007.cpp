#include <iostream>
#include <algorithm>
using namespace std;

int n;
char a[1000];

void init() {
    for (int i = 1; i <= n; i++) {
        a[i] = 'A';
    }
}

bool LastGen() {
    for (int i = 1; i <= n; i++) {
        if (a[i] != 'B') {
            return false;
        }
    }
    return true;
}

void GenNext() {
    int i = n;
    while (a[i] == 'B')
    {
        i--;
    }
    a[i] = 'B';
    for (int j = i + 1; j <= n; j++)
    {
        a[j] = 'A';
    }
}

void Display() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        init();
        Display();
        while (!LastGen()) {
            GenNext();
            Display();
        }
        cout << endl;
    }
    return 0;
}
