#include<bits/stdc++.h>
using namespace std;

long long sum (long long n){
    long long ans = 0;
    while(n){
        ans+= n%10;
        n/=10;
    }
    return ans;
}

long long smith(long long n){
    long long sum1 = sum(n);
    long long sum2 = 0;
    long long tmp = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n%i == 0)
        {
            sum2 += sum(i);
            n/=i;
        }
        if (tmp == n)
        {
            return 0;
        }
        if (n!=1) sum2 += sum(n);
        return 1;
    }
    
}
int main(){
       long long n;
       cin>>n;
        if (smith(n))
        {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
}