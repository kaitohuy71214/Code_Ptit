#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string MSV;
    string Name;
    string Class;
    string Date;
    double GPA;
    SinhVien(){
        MSV = "B20DCCN001";
    }
    friend istream &operator >> (istream &is, SinhVien &a){
        getline(is, a.Name);
        is >> a.Class >> a.Date >> a.GPA;
        if (a.Date[2] != '/') a.Date.insert(0, "0");
        if (a.Date[5] != '/') a.Date.insert(3, "0");
        return is;
    } 
    friend ostream &operator << (ostream &os, SinhVien &a){
        os << a.MSV << " " << a.Name << " " << a.Class << " "<< a.Date << " " << fixed << setprecision(2) << a.GPA;
        return os;
    }

};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}