#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<string>s;
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char m[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	for(int i=0;i<n;i++){
		string ss;
		cin>>ss;
		int j;
		for(j=0;j<17;j++){
			if(isdigit(ss[j])){
				continue;
			}
			else
			{
				s.push_back(ss);
				break;
			}
		}
		if(j==17){
			int sum=0;
			for(int k=0;k<17;k++){
				sum+=(ss[k]-'0')*a[k];
			}
			int z = sum%11;
			if(ss[17]!=m[z]){
				s.push_back(ss);
			}
		}
	}
	if(s.size()!=0){
		for(int i=0;i<s.size();i++){
			cout<<s[i];
			if(i!=s.size()-1){
				cout<<endl;
			}
		}
	}
	else
	{
		cout<<"All passed";
	}
	return 0;
}
