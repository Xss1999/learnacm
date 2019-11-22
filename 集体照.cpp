#include<bits/stdc++.h>
using namespace std;
struct People{
	string name;
	int height;
};
bool cmp(People a,People b){	
	return a.height!=b.height?a.height>b.height:a.name<b.name;
}

int main(){
	int n=0,k=0;	
	cin>>n>>k;
	int p=n/k;
	vector<People> stu(n);
	int row=k;
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].height;
	}
    sort(stu.begin(),stu.end(),cmp);
    int t=0,m;
    while(row){
    	if(row==k){
    		m=n-(k-1)*p;
		}
		else
		{
			m=p;
		}
		vector<string> s(m);
		s[m/2] = stu[t].name;
		int j=m/2-1;
		for(int i=t+1;i<t+m;i+=2){
			s[j--] = stu[i].name; 
		}
		j=m/2+1;
		for(int i=t+2;i<t+m;i+=2){
			s[j++] = stu[i].name; 
		}
		for(int i=0;i<m;i++){
			cout<<s[i];
			if(i!=m-1){
				cout<<" ";
			}
		}
		if(row!=1){
			cout<<endl;
		}		
		t = t+m;
		row--;
	}
	return 0;
}
