#include<iostream>
using namespace std;

int soChuSoLe(int n){
    int count=0;
    while (n>0)
    {
        if ((n%10)%2!=0)
        {
            count++;
        }
        n/=10;
    }
    return count;
}

int soChuSoChan(int n){
    int count=0;
    while (n>0)
    {
        if ((n%10)%2==0)
        {
            count++;
        }
        n/=10;
    }
    return count;
}

void solve(int i, int *count){
    if ((soChuSoChan(i))==soChuSoLe(i))
        {
            if ( *count%10==0 & *count!=0) {cout<<endl;}
            cout<<i<<" ";
            *count+=1;
        }
}

int main(){
    int n, count=0;
    cin>>n;
    switch (n)
    {
    case 2:
        for (int i = 10; i < 100; i++)
        {
         solve(i,&count);   
        }
        break;
    case 4:
        for (int i = 1000; i < 10000; i++)
        {
          solve(i,&count);  
        }
        break;   
    case 6:
        for (int i = 100000; i < 1000000; i++)
        {
           solve(i,&count); 
        }
        break;     
    default:
        break;
    }
    return 0;
}