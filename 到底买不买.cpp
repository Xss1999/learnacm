#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;

    int count2=0;
	for(int i=0;i<s2.length();i++){
		if(s1.length()==0){
			break;
		}
		if(s1.find(s2[i])!=string::npos){
			s1.replace(s1.find(s2[i]),1,"");
		}
		else{
			count2++;//È±¼¸¸ö 
		}
	}
	if(count2!=0){
		cout<<"No"<<" "<<count2;
	}
	else
	{
		cout<<"Yes"<<" "<<s1.length();
	}
	return 0;
}
