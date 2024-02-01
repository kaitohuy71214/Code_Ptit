#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    float a[50] = {0};
    for (int  i = 1; i <= 40; i++)
    {
        if (i<3)
        {
            a[i] = 0;
        }else if(i<=4) a[i] =2.5;
        else if(i <=6) a[i] = 3.0;
        else if(i<=9) a[i] = 3.5;
        else if(i<=12) a[i] = 4.0;
        else if(i<=15) a[i] = 4.5;
        else if(i<=19) a[i] = 5.0;
        else if(i<=22) a[i] = 5.5;
        else if(i<=26) a[i] = 6.0;
        else if(i<=29) a[i] = 6.5;
        else if(i<=32) a[i] = 7.0;
        else if (i<=34) a[i] =7.5;
        else if(i<=36) a[i] =8.0;
        else if(i<=38) a[i] = 8.5;
        else a[i] = 9.0;        
    }
    while (t--)
    {
        int s_read, s_lis;
        float write, speak;
        cin>>s_read>>s_lis>>write>>speak;
        float read = a[s_read];
        float lis = a[s_lis];
        float average = (read + lis + write + speak)/4;
        if (average> (int)average && average<(int)average + 0.25)
        {
            average = (int) average;
        }else if(average>=(int)average+0.25 && average<=(int)average + 0.5) average = (int)average +0.5;
        else if(average>(int)average+0.5 && average< (int)average+0.75) average = (int)average +0.5;
        else average = (int)average + 1;

        printf("%.1f", average);
        cout<<endl;
        
    }
}    