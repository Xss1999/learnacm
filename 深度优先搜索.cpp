#include<bits/stdc++.h>
using namespace std;
const int maxn=30;
int n,v;
int w[maxn],c[maxn];
int maxvalue=0;

void DFS(int index,int sumw,int sumc){
	if(index==n){
		return;
	}
	
	DFS(index+1,sumw,sumc);
	if(sumw+w[index]<=v){
		if(sumc+c[index]>maxvalue){
			maxvalue = sumc+c[index];
		}
	}
	DFS(index+1,sumw+w[index],sumc+c[index]);
}

int main(){
	cin>>n>>v;
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	DFS(0,0,0);
	cout<<maxvalue;
	return 0;
}
 
