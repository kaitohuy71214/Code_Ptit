#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
};

void nhap( PhanSo &x){
    cin>> x.tu>> x.mau;
}

PhanSo tong( PhanSo &x, PhanSo &y){
    long long tmp = ( x.mau * y.mau)/__gcd( x.mau, y.mau);
    x.tu *= tmp / x.mau;
    y.tu *= tmp / y.mau;
    PhanSo t;
    t.tu = x.tu + y.tu;
    t.mau = tmp;
    long long tmp1 = __gcd( t.tu, t.mau);
    t.tu /= tmp1;
    t.mau /= tmp1;
    return t;
}
void in( PhanSo t){
    cout<< t.tu<< "/"<< t.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
