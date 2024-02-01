#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int t;
    cin>>t;
    while (t--){
        long long n;
        cin>>n;
        cin.ignore();
        vector<string> v(n);
        string str;
        set<char> s;
        
        // Đọc các string từ input và thêm vào vector v
        for (int i = 0; i < n; i++){
            cin>>v[i];
        }
        
        // Đưa từng ký tự vào set s
        for (auto x : v){
            for (int i = 0; i < x.size(); i++){
                s.insert(x[i]);
            }
        }
        
        // In tất cả các ký tự trong set s
        for (auto x : s){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}