#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		int j1,j2,y1,y2;//1--º°  2--»®
		cin>>j1>>j2>>y1>>y2;
		if(j2==(j1+y1) && y2!=(j1+y1)){
			count2++;
		} 
		if(j2!=(j1+y1) && y2==(j1+y1)){
			count1++;
		}
	}
	cout<<count1<<" "<<count2;
	return 0;
} 
