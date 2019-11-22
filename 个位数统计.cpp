#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10]={0};
	string num;
	cin>>num;
	for(int i=0;i<num.length();i++){
		a[num[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(a[i]==0){
			continue;
		}
		cout<<i<<":"<<a[i]<<endl;
	}
	return 0;
} 
