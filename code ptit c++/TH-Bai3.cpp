
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

struct idea {
    int code;
    int share;
    int interact;
};

void input(idea &x) {
    cin >> x.code >> x.share >> x.interact;
}

int main() {
    int list;
    cin >> list;
    vector<map<int, float>> v;

    while (list--) {
        map<int, float> m;
        struct idea x;
        input(x);
        float average = 0.7 * x.share + 0.3 * x.interact;
        m[x.code] = average;
        v.push_back(m);
    }
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i].begin()->second < v[j].begin()->second)
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 7; j++)
        {
            if (v[i].begin()->first > v[j].begin()->first)
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        cout<< v[i].begin()->first<< " ";
    }
    return 0;
}

