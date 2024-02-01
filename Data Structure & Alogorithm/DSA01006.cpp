#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[1000];

void init() {
    for (int i = 1, j = n; i <= n; i++, j--) {
        a[i] = j;
    }
}

bool LastGen() {
    for (int i = 1; i <= n; i++) {
        if (a[i] != i) {
            return false;
        }
    }
    return true;
}

bool cmp(const int a, const int b) {
    return a > b;
}
void GenNext() {
    int i = n - 1;
    while (i > 0 && a[i] < a[i + 1]) {
        i--;
    }
    int j = n;
    while (a[j] > a[i]) {
        j--;
    }
    swap(a[i], a[j]);
    sort(a + i + 1, a + n + 1, cmp);
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
