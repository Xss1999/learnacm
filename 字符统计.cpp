#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int a[26]={0};
	for(int i=0;i<s.length();i++){
		s[i] = tolower(s[i]);		
	}
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			a[s[i]-'a']++;
		}
	}
	int x=0;
	int max = a[0];
	
	for(int i=1;i<26;i++){
		if(a[i]>max){
			max = a[i];
			x = i;
		}
	}
	char y = x+'a';
	cout<<y<<" "<<max;
	return 0;
}
