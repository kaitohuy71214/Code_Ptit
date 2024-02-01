#include<bits/stdc++.h>
using namespace std ;

struct NhanVien{
    NhanVien(){
        MNV = "00001 ";
    }
    string MNV;
    string Name;
    string Gender;
    string Date;
    string Adress;
    string MST;
    string DateSign;
};

void nhap( NhanVien &a){
    getline(cin, a.Name);
    getline(cin, a.Gender);
    getline(cin, a.Date);
    getline(cin, a.Adress);
    getline(cin, a.MST);
    getline(cin, a.DateSign);
}

void in( NhanVien a){
    cout<< a.MNV<< a.Name<<" "<< a.Gender<< " "<< a.Date<<" "<< a.Adress<< " "<< a.MST<< " "<< a.DateSign;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}