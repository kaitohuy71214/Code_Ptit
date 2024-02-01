
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int f[100001] ={0};
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            f[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (f[a[i]] > 1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

