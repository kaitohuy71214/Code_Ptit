#include <iostream>
#include <algorithm>
using namespace std;

int a[1000];
int n;

void Gennext() {
    int i = n - 1;
    while (a[i] > a[i + 1] && i > 0)
    {
        i--;
    }
    int j = n;
    while (a[j] < a[i])
    {
        j--;
    }
    if ( i == 0) i++;
    swap(a[i] , a[j]);
    sort(a + i + 1,a + n + 1);
}

void Display() {
    for (int i = 1; i <= n; i++)
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
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        Gennext();
        Display();      
    }
    return 0;
}