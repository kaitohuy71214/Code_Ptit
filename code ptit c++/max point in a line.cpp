
#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    if (b == 0)
        return a;
    return lcm(b, a % b);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> points(n, vector<int>(2));
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> points[i][j];
        }
    }
    /*
        ptdt : y = ax + b;
        ptdt có độ dốc là : 
        y2 -y1      y - y1
        ______  = _________
        x2 - x1     X - X1
        
    */
    for (int i = 0; i < n; i++) {
        map<pair<int, int>, int> m;
        int samepoints = 1;
        for (int j = i + 1; j < n; j++) {
            if (points[i][0] == points[j][0] && points[i][1] == points[j][1]) {
                samepoints++;
                continue;
            }
            int dx = points[j][0] - points[i][0];
            int dy = points[j][1] - points[i][1];
            int f = lcm(dx, dy);
            m[{dx/f, dy/f}]++;
        }
        res = max(res, samepoints);
        for (auto it = m.begin(); it != m.end(); it++) {
            res = max(res, it->second + samepoints);
        }
    }
    cout << res;
    return 0;
} 




