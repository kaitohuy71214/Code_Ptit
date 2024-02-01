#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 20;

int n;
int a[MAX_N][MAX_N];
bool unused[MAX_N];
int sum;
int cnt;
vector<int> results;

void Elements_Left(int i, int j) {
    for (int x = 0; x < n; x++) {
        unused[a[i][x]] = false;
    }
    for (int x = 0; x < n; x++) {
        unused[a[x][j]] = false;
    }
}

void Elements_Choose(int i, int j) {
    for (int x = 0; x < n; x++) {
        unused[a[i][x]] = true;
    }
    for (int x = 0; x < n; x++) {
        unused[a[x][j]] = true;
    }
}

void Try(int i) {
    for (int j = 0; j < n; j++) {
        if (unused[a[i][j]]) {
            sum += a[i][j];
            cnt++;
            if (cnt == n) {
                results.push_back(sum);
                cnt--;
                Elements_Choose(i, j);
            } else {
                Elements_Left(i, j);
                Try(i + 1);
            }
            sum -= a[i][j]; 
            cnt--;
            Elements_Choose(i, j);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        cnt = 0;
        results.clear();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        cout << "hh";
        Try(0);
        for (int i = 0; i < results.size(); i++) {
            cout << results[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
