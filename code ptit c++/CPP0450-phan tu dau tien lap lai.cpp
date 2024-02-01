#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>> n;
        long long a[n];
        multiset<long long> ms;
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int cnt = 0;
        for (long long i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    cout<<a[j]<<endl;
                    cnt++;
                    break;
                }   
            }
            if (cnt == 1) break;
        }
        if (cnt == 0) cout<<"-1"<<endl;

    }
}    