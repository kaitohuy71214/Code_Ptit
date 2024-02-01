#include<bits/stdc++.h>
using namespace std;

void change( int n, int m, int i, int j,int b[100][100]){
    for (int x = i; x < n; x++)
    {
        b[i][x]=1;
    }    
    for (int x = j; x < m; x++)
    {
        b[x][j]=1;
    }       
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        int b[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                b[i][j]=a[i][j];
            }
        }        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j]==1)
                {
                    change(n,m,i,j,b);
            }
        }
        for (int i = 0; i < n; i++)
            
            for (int j = 0; j < m; j++)
            {
                cout<<b[i][j];
            }
            cout<<endl;
            }
        }
    }
