#include<iostream>
#include<math.h>

using namespace std;

int main(){
        int n,i=2;
        cin>>n;
        int soMu=0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if ( n%i == 0)
            {
                int cnt = 0;
                while (n%i==0)
                {
                    cnt++;
                    n/=i;
                }
                 cout<<i<<" "<<cnt<<endl;;
            }
        }
        if (n!=1)
        {
            cout<<n<<" "<<1<<endl;
        }
        
    return 0;
}