#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    float point;
    string nation;
    int area;

    void input(){
        getline(cin, name);
        cin >> point;
        cin.ignore();
        getline(cin, nation);
        cin >> area;
        cin.ignore();
    }
};
void TruePoint(Student &a){
    if (a.area == 1) a.point += 1.5;
    if (a.area == 2) a.point += 1;
    if (a.nation != "Kinh") a.point += 1.5;
    if (a.point >= 20.5){
        cout << a.point << " Do" << endl;
    }else{
        cout << a.point << " Truot" << endl;
    }
}
void TrueName(Student &a){
    transform(a.name.begin(), a.name.end(), a.name.begin(), ::tolower);
    stringstream ss(a.name);
    string tmp;
    while (ss >> tmp){
        tmp[0] = toupper(tmp[0]);
        cout << tmp << " ";
    }
}
int main(){
    int test, cnt = 0;
    cin >> test;
    cin.ignore();
    while (test--){
        cnt++;
        Student x;
        x.input();
        if (cnt < 10) cout << "TS0" << cnt << " ";
        else cout << "TS" << cnt << " ";
        TrueName(x);
        TruePoint(x);
    }
}