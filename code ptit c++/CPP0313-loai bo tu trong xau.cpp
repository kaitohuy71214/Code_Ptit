#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    string del;
    getline(cin, s);
    getline(cin, del);
    int tmp;
    tmp = s.find(del);
    s.erase(tmp, del.length());
    cout<<s;
}