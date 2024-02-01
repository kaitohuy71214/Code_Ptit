#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        
    }
    
}
/*
    0,0 0,1     1,0 0,0
    1,0 1,1     1,1 0,1
    
    0,0 0,1 0,2   
    1,0 1,1 1,2
    2,0 2,1 2,2

*/
