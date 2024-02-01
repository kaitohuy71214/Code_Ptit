#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    if (n < 2)
    {
        return false;
    }else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if ( n % i == 0)
            {
                return false;
                break;
            }            
        }
    }
    return true;
}
int main() {
	int n,m[20][20],row,col,a,b,t,arr[500],f=0;
	for (long long k=2;k<3000;k++)
	{
		if (IsPrime(k)) arr[f++]=k; 
	}
	cin >> t;
	for (long long k = 1;k <= t; k++)
	{
		cin >> n;
        cout << "TEST " << k << ":" <<endl;
		f=0;
		a=arr[f];row=n-1;col=n-1;b=0;
		while(b<=n/2)
		{
			for (int i=b;i<=col;i++) m[b][i]=arr[f++];
			for (int i=b+1;i<=row;i++) m[i][col]=arr[f++];
			for (int i=col-1;i>=b;i--) m[row][i]=arr[f++];
			for (int i=row-1;i>b;i--) m[i][b]=arr[f++];
			b++;row--;col--;
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
                cout << m[i][j] << " ";
			}
			cout << endl;
		}
	}
}