#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int a[16];

void init() {
    for (int i = 1; i <= n; i++) {
        if (i <= n - k) {
            a[i] = 0;
        }else a[i] = 1;
    } 
}

bool LastGen() {
    for (int i = 1; i <= n; i++) {
        if ((i <= k && a[i] == 0) || i >= k+1 && a[i] == 1)
        {
            return false;
            break;
        }
    }
    return true;
}

void GenNext() {
    int i = n;
    if (a[i] == 0 && a[1] == 1) i--; 
    while (a[i] == 1)
    {
        i--;
    }
    if (i == n && a[1] == 0 )
    {
        a[1] = 1;
        a[i] = 1;
        for (int j = 2; j < n; j++)
        {
            a[j] = 0;
        }   
    }
    if( i != n) {
        a[i] = 1;
        a[i + 1] = 0;
    }
}

void Display() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        init();
        Display();
        while (!LastGen()) {
            GenNext();
            Display();
        }
    }
    return 0;
}
