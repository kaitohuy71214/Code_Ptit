#include<bits/stdc++.h>
using namespace std;
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
struct SinhVien{
    string MSV;
    string Name;
    string Class;
    string Date;
    double GPA;
    SinhVien(){
        MSV = "B20DCCN001";
    }
void nhap(){
    getline( cin, Name);
    getline( cin, Class);
    getline( cin, Date);
    cin>> GPA;
}

void xuat(){
    cout<< MSV<<" "<< Name<< " "<<Class<< " ";
    TrueDate( Date);
    cout<<fixed<< setprecision(2)<< GPA<< endl;
}    
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}