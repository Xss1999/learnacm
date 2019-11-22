#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	set<int> a;
	int b[40]={0};
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int x=0;
		for(int j=0;j<s.length();j++){
			x+=s[j]-'0';
		}
		a.insert(x);
	}

	cout<<a.size()<<endl;
	for(set<int>::iterator it=a.begin();it!=a.end();it++){
		if(it!=a.begin()){
			cout<<" ";
		}
		cout<<*it;
	}
	return 0;
}
