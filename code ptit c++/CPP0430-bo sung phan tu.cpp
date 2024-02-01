#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            ms.insert(a[i]);
        }
        int cnt = 0;
        int L = *max_element(a, a + n);
        int R = *min_element(a, a + n);
        for (int i = R; i < L; i++){
            if (ms.count(i) == 0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
}