#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    int a[n];
    for( auto &x : a) cin >> x;
    int i = n -2, j = n- 1;
    while (a[i] <= a[i+1] && i >= 0)
    {
        i--;
    }
    while (a[j] >= a[i])
    {
        j--;
    }
    swap(a[i], a[j]);
    for(auto x :a) cout<< x << " ";
    cout << endl;
}
int main(){
    int t;
    cin>> t;
    while (t--)
    {
        testcase();
    }
}