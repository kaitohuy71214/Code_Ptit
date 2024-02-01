#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<string> v;
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	} 	    
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        v.push_back(tmp);        
    }
    for(int i = 0; i < v.size() - 1; i++){
		v[i][0] = toupper(v[i][0]);
	}
    for(int i = 0; i < v[v.size() - 1].size(); i++){
		v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
	}
    for(int i = 0; i < v.size() - 1; i++){
		cout<<v[i];
        if(i < v.size() - 2) cout<<" ";
	}
    cout<<","<<v[v.size() - 1];
}