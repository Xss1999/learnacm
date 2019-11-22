#include<bits/stdc++.h>
using namespace std;

int main(){
	string pwd;
	int n;
	cin>>pwd>>n;
	vector<string> v[100000];
	for(int i=0;;i++){
		string str;
		cin>>str;
		if(str=="#"){
			break;
		}
		v.push_back(str);
	}
	for(int i=0;i<=n;i++){
		if(v[i]!=pwd){
			cout<<"Wrong password: "<<v[i];
		}
		else if(i==n){
			cout<<"Account locked";
			break;
		}
		else if(v[i]==pwd)
		{
			cout<<"Welcome in";
		}
		if(i!=n){
			cout<<endl;
		}		
	}
	return 0;
}
