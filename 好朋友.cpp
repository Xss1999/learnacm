#include<bits/stdc++.h>
using namespace std;

const int maxn = 110;
int father[maxn];
bool isroot[maxn];

int findfather(int x){
	int a = x;
	while(x!=father[x]){
		x = father[x];
	}
	while(a!=father[a]){
		father[a] = x;
		a = father[a];
	}
	return x;
}

void Union(int a,int b){
	int faA = findfather(a);
	int faB = findfather(b);
	if(faA!=faB){
		father[faA] = faB;
	}
}

void init(int x){
	for(int i=1;i<=x;i++){
		father[i] = i;
		isroot[i] = false;
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	init(n);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		Union(a,b);
	}
	int count=0;
	for(int i=1;i<=n;i++){
		//isroot[findfather(i)] = true;
		if(father[i]==i){
			count++;
		}
	}
//	for(int i=1;i<=n;i++){
//		if(isroot[i]==true){
//			count++;
//		}
//	}
	cout<<count;
	return 0;
}
