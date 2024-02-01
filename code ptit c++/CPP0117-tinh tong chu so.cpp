#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        again:
        while(n>0){
            sum+=(n%10);
            n/=10;
        }
        if (sum>=10)
        {
            n=sum;
            sum=0;
            goto again;
        }
        cout<<sum<<endl;
    }
    return 0;
}