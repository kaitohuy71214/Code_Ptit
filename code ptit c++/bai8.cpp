#include<bits/stdc++.h>
#define FOR(i, a,b) for(int i =a; i<=b;i++)
#define rFOR(i,a,b) (int i=a;i>=b;i--)
#define int unsigned long long
#define endl '\n'
#define FASTER


int n,m,k;

using namespace std;

signed main(){
    FASTER;
    int n;
    cin>>n;
    vector<float> arr(n);
    for(auto &x : arr) cin>>x;
    float minx = *min_element(arr.begin(), arr.end());
    float maxx = *max_element(arr.begin(), arr.end());
    float sum = 0;
    int i = 0;
    for( float x : arr){
        if(x!=minx && x!=maxx){
            i++;
            sum+=x;
        }
    }
    cout<<setprecision(2)<<fixed<<(float)sum/i;
}