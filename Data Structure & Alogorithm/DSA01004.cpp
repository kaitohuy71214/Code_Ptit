#include <iostream>
using namespace std;

int n, k;
int a[1000];

void init() {
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

bool LastGen() {
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != n - k + i)
        {
            return false;
            break;
        }
    }
    return true;
}

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

void Display() {
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        init();
        Display();
        while (!LastGen())
        {
            GenNext();
            Display();
        }
        cout << endl;
    }
    return 0;
}