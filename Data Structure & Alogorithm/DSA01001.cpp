#include <iostream>
using namespace std;

int a[1000];
string x;

void GenNext(){
    int i = x.length() - 1;
    while (a[i] == 1)
    {
        i--;
    }
    a[i] = 1;
    for (int j = i + 1; j < x.length(); j++)
    {
        a[j] = 0;
    }
}

void Display(){
    for (int i = 0; i < x.length(); i++)
    {
        cout << a[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, x);
        for (int i = 0; i < x.length(); i++)
        {
            a[i] = x[i] - '0';
        }
        GenNext();
        Display();
    }
    return 0;
}