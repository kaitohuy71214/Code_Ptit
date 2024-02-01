#include<iostream>
using namespace std;

int giaithua(int n){
    int multi=1;
    for (int i = 1; i <= n; i++)
    {
        multi*=i;
    }
    return multi;
}

int main(){
    int n,sum=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum+=giaithua(i);
    }
    cout<<sum;
    return 0;
}


