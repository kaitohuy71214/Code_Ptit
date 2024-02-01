#include<iostream>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n,sum=0;
        std::cin>>n;
        for (int i = 0; i <= n; i++)
        {
            sum+=i;
        }
        std::cout<<sum<<std::endl;
    }
    return 0;   
}