#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for (long long i=0;i<n;i++) cin>>a[i];
        sort(a+0,a+n);
        int min=1;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>0){
                if (a[i]<=min)
                {
                    min=a[i]+1;
                }else break;
            }
        }
        cout<<min<<endl;
    }
}
