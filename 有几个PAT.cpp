#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int count1=0,count2=0,sum=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='T'){
			count1++;
		}
	}
	for(int i=0;i<s.length();i++){
		if(s[i]=='P'){
			count2++;
		}
		if(s[i]=='T'){
			count1--;
		}
		if(s[i]=='A'){
			sum = (sum+(count1*count2)%1000000007)%1000000007;
		}
	}
	cout<<sum; 
	return 0;
}
