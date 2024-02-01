#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string Name;
    string Class;
    string Date;
    double GPA;

};

void nhap( SinhVien &sv){
    getline(cin, sv.Name);
    getline(cin, sv.Class);
    getline(cin, sv.Date);
    cin>> sv.GPA;
}

void TrueDate( string s){
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while ( getline( ss, tmp, '/'))
    {
        if ( tmp.length() == 1 )
        {
            s.insert( s.begin() + cnt, '0');
            cnt = 3;
        }
    }
    cout<< s<< " ";
}

void in( SinhVien sv){
    cout<< "B20DCCN001 "<< sv.Name<< " "<< sv.Class<< " ";
    TrueDate( sv.Date);
   cout<< fixed<< setprecision(2)<< sv.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
