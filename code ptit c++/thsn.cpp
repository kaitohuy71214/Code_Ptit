#include <bits/stdc++.h>
using namespace std;

void input(int a[], int n, set<int>& A){
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        A.insert(a[i]);
    }
}
void output(set<int>& A){
    for( auto x : A){
        cout << x << "";
    }
}
bool compare(set<int>& x, set<int>& y){
    return x.size() >= y.size();
}
void Giao(set<int>& A, set<int>& B){
    if (compare(A,B))
    {
    for (const auto& x : B)
    {
        if (A.count(x) != 0)
        {
            cout << x << " ";
        }
        
    }
    }else{
    for (const auto& x : A)
    {
        if (B.count(x) != 0)
        {
            cout << x<< " ";
        }
        
    }
    }
}
void AB(set<int>& A, set<int>& B){
    for (const auto& x : A)
    {
        if (B.count(x) == 0)
        {
            cout << x << " ";
        }
        
    }
}
void BA(set<int>& A, set<int>& B){
    for (const auto& x : B)
    {
        if (A.count(x) == 0)
        {
            cout << x << " ";
        }
        
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> A, B;
    input(a, n, A);
    input(b, m, B);
    Giao(A,B);
    cout << endl;
    AB(A,B);
    cout << endl;
    BA(A, B);
    cout << endl;
}