#include<bits/stdc++.h>
using namespace std;

struct ThiSinh {
    string name;
    string date;
    double point1;
    double point2;
    double point3;
};
void nhap(ThiSinh &A) {
    getline( cin, A.name);
    getline( cin, A.date);
    cin>> A.point1>> A.point2>> A.point3;
}
double total( double x, double y, double z){
    return x + y + z;
}
void in(ThiSinh &A){
    cout<< A.name<< " "<< A.date<< " "<< fixed<< setprecision(1)<< total( A.point1, A.point2, A.point3);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}