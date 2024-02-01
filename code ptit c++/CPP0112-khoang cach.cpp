#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double toado[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin>>toado[i][j];
            }
        }
        double x = toado[1][0] - toado[0][0];
        double y = toado[1][1] - toado[0][1];
        double d = sqrt ( pow(x,2) + pow(y,2) );
        cout<<setprecision(4)<<fixed<<d<<endl;
    }
    return 0;
}