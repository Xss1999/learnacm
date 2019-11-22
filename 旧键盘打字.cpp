#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	int flag=0;
	if(getline(cin,s1)){
		flag = 1;
	}
	cin>>s2;
	string s="";
	if(flag==1){
		for(int i=0;i<s2.length();i++){
		if(s1.find(s2[i])!=string::npos || s1.find(toupper(s2[i]))!=string::npos){
			continue;
		}
		if(s1.find('+')!=string::npos && s2[i]>='A' && s2[i]<='Z'){
			continue;
		}
		s+=s2[i];
	    }
	    cout<<s;
	}
	else
	{
		cout<<s2;
	}
	return 0;
}
