#include <bits/stdc++.h>
using namespace std;

struct nhanvien
{
    string MNV = "NV01";
    string Name, Chucvu;
    long long Salary, day, luongthang, thuong, phucap, thunhap;

    void input(){
        getline(cin, Name);
        cin >> Salary >> day;
        cin.ignore();
        getline(cin, Chucvu);
    }
    void output(){
        cout << MNV << " " << Name << " " << luongthang << " "<< thuong << " "<< phucap << " "<< thunhap;
    }
    void solve(){
        luongthang = Salary * day;
        if (day >= 25)
        {
            thuong = 0.2 * luongthang;
        }else if (day >= 22)
        {
            thuong = 0.1 * luongthang;
        }else
        {
            thuong = 0;
        }
        if (Chucvu == "GD")
        {
            phucap = 250000;
        }else if (Chucvu == "PGD")
        {
            phucap = 200000;
        }else if (Chucvu == "TP")
        {
            phucap = 180000;
        }else if (Chucvu == "NV")
        {
            phucap = 150000;
        }
        thunhap = luongthang + thuong + phucap;
    }
};
int main(){
    struct nhanvien X;
    X.input();
    X.solve();
    X.output();
}
