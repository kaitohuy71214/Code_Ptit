#include <iostream>
using namespace std;

const int MAX_N = 100;
int n, a[MAX_N];

void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void genNext() {
    int i = n;
    while (a[i] == 1) {
        a[i] = 0;
        --i;
    }
    a[i] = 1;
}

void display() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool check() {
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            return false;
        }
    }
    return true;
}

bool thuannghich() {
    for (int i = 1, j = n; i < j; i++, j--) {
        if (a[i] != a[j]) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    cin >> n;
    khoitao();
    display();

    while (!check()) {
        genNext();
        if (thuannghich()) {
            display();
        }
    }
    return 0;
}
