#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int sum=0;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			sum+=tolower(s[i])-'a'+1;
		}
	}
	int cnt1=0,cnt0=0;
	while(sum){
		if(sum%2==1){
			cnt1++;
		}
		else if(sum%2==0){
			cnt0++;
		}
		sum/=2;
	}
	cout<<cnt0<<" "<<cnt1;
	return 0;
}
