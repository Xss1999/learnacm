#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10]={0};
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<10;i++){
		if(a[i]!=0){
			cout<<i;
			a[i]--;
			break;
		}
	}
	
	if(a[0]!=0){
		int x=a[0];
		for(int i=0;i<x;i++){
			cout<<0;
			a[0]--;
		}
	}
	for(int j=1;j<10;j++){
		if(a[j]!=0){
			int x=a[j];
		for(int i=0;i<x;i++){
			cout<<j;
			a[j]--;
		}
	    }
	}
	
	return 0;
}
