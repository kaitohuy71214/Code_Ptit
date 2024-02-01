#include <bits/stdc++.h>
using namespace std;

int n, a[100];

void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void genNext() {
    int i = n;
    while ( a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    a[i] = 1;
}

void display(){
    for (int i = 1; i <= n; i++)
    {
        cout<< a[i];
    }
    cout<< " ";
}

bool check(){
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            return false ;
            break;
        }
    }
    return true;
}

int main(){
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n;
        khoitao();
        display();
        while (check() == false)
        {
        genNext();
        display();
        }
        cout<< endl;
    }
    
    return 0;
}