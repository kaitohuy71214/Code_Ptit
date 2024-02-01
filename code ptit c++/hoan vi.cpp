#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void khoitao(){
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
bool check(){
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i + 1] != 1)
        {
            return false;
            break;
        }
    }
    return true;
}
void GenNext(){
    int i = n -1;
    while (a[i] > a[i + 1] && i >= 1)
    {
        i--;
    }
    int j = n;
    while (a[j] < a[i])
    {
        j--;
    }
    swap(a[i], a[j]);
    sort(a + i + 1, a + n + 1);
}
void display(){
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i];
    }
    cout<< endl;
}
int main(){
    cin>>n;
    khoitao();
    display();
    while (!check())
    {
        GenNext();
        display();
    }
}