#include<bits/stdc++.h>
using namespace std ;

struct NhanVien{
    string MNV;
    string Name;
    string Gender;
    string Date;
    string Adress;
    string MST;
    string DateSign;
};

void nhap( NhanVien &a){
    scanf("\n");
    getline(cin, a.Name);
    getline(cin, a.Gender);
    getline(cin, a.Date);
    getline(cin, a.Adress);
    getline(cin, a.MST);
    getline(cin, a.DateSign);
}

string STT(int i)
{
    string r = to_string(i);
    while (r.length() < 5)
        r = '0' + r;
    return r;
}

void inds( NhanVien ds[], int N){
    for (int i = 0; i < N; i++)
    {
    cout<< STT(i + 1)<< " "<<ds[i].Name<<" "<< ds[i].Gender<< " "<< ds[i].Date<<" "<< ds[i].Adress<< " "<< ds[i].MST<< " "<< ds[i].DateSign<< endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}