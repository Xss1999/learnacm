#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int couple[100000];
	fill(couple,couple+100000,-1);//初始赋值为-1，不是0因为有couple[i]=00000的情况 
	int isexist[100000]={0};
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		couple[a] = b;
		couple[b] = a;
	}
	int m;
	cin>>m;
	set<int> s;
	int guest[m];
	int t=0;
	for(int i=0;i<m;i++){
		cin>>guest[i];
		if(couple[guest[i]]!=-1)
		{
			isexist[couple[guest[i]]]=1;
		}
	}
	for(int i=0;i<m;i++){
		if(isexist[guest[i]]==0){
			s.insert(guest[i]);
		}
	}
	cout<<s.size();
	if(s.size()!=0){
		cout<<endl;
	}
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		if(it!=s.begin()){
			cout<<" ";
		}
		printf("%05d",*it);
	}
	return 0;
}
