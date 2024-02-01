#include<iostream>
#include<stdbool.h>
using namespace std;

bool SoLocPhat(int n){
    while(n>0){
        if ((n%10)!=0 & (n%10)!=6 & (n%10)!=8 )
        {
            return 0;
            break;
        }
        n/=10;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (SoLocPhat(n))
        {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
        
    }
    return 0;
}