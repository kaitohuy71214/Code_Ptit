#include<bits/stdc++.h> 
#include<string.h> 

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
	while(ss >> tmp){
		v.push_back(tmp);
	}
	cout<< v.back();
	for(int i = 0; i < v.size() - 1; i++){
		cout<<v[i][0];
	}
	cout<<"@ptit.edu.vn";
	return 0;
}