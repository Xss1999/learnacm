#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	string s;
	for(int i=0;i<s1.length();i++){
		if(s2.find(s1[i])==string::npos && s.find(toupper(s1[i]))==string::npos){
			s+=toupper(s1[i]);
		}
	}
	cout<<s;
	return 0;
} 
