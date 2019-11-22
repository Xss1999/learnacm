#include<bits/stdc++.h>
using namespace std;

struct student{
	string num;
	int s;
	int z;
};

int main(){
	int n;
	cin>>n;
	student *st;
	st = new student[n+2];
	for(int i=0;i<n;i++){
		int s,z;
		string num;
		cin>>num>>s>>z;
		st[s].num = num;
		st[s].z = z;
		st[s].s = s;		
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		cout<<st[x].num<<" "<<st[x].z<<endl;
	}
	return 0;
}
