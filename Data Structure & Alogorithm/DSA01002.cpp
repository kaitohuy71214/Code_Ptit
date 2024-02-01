#include <iostream>
using namespace std;

int n, k;
int a[1000];

void GenNext() {
    int i = k;
    for ( i; i >= 1; i--)
    {
        if (a[i] < n - k + i)
        {
            a[i]++;
            break;
        }
    }
    for (int j = i + 1; j <= k; j++){ 
        a[j] = a[j - 1] + 1; 
    } 
}

void display() {
    for (int i = 1; i <= k; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        GenNext();
        display();
    }
    return 0;
}