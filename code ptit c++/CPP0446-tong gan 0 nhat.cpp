
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int closestToZero(int a[], int n) {
    int closestSum = INT_MAX;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(closestSum)) {
                closestSum = sum;
            }
        }
    }
    return closestSum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int closest = closestToZero(a, n);
        cout << closest << endl;
    }
    return 0;
}

