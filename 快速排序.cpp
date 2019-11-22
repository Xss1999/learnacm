#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	vector<int> a,c;
	vector<int> b;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
		c.push_back(temp);
	}
	sort(c.begin(),c.end());
	int max=0;	
	for(int i=0;i<n;i++){				
		if(a[i]>max){
			max = a[i];
		}
		if(max==a[i] && a[i]==c[i]){
			b.push_back(a[i]);
		}
	}
	cout<<b.size()<<endl;
	//sort(b.begin(),b.end());
	for(int i=0;i<b.size();i++){
		cout<<b[i];
		if(i!=b.size()-1){
			cout<<" ";
		}
	}
	//cout<<endl;
	return 0;
} 
