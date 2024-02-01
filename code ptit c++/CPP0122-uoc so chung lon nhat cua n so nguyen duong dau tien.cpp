#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	 	while(b!=0){
	 	long long c=a%b;
	 		a=b;
	 		b=c;
	
		 }
			 return a;
	}


long long lcm(long long a,long long b){
	return (a*b)/gcd(a,b);
}

int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long tmp=1;
        for (long long i = 1; i <= n; i++)
        {
                tmp=lcm(i,tmp);
        }
        cout<<tmp<<endl;
    }
}