#include<bits/stdc++.h>
using namespace std;
int m,n,t;
int x[4] = {0,-1,0,1};
int y[4] = {-1,0,1,0};
vector<int> v[1000];
bool isRed(int x,int y){
	for(int i=0;i<4;i++){
		newx = x+x[i];
		newy = y+y[i];
		if((newx>=0 && newx<=n)&&(newy>=0 && newy<=m)){
			if(isRed(newx,newy)){
				
			}
		}
	} 
}

int main(){	
	cin>>m>>n>>t;	
	int temp;
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>temp;
			v[i][j].push_back(temp);
		}
	} 
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(isRed(i,j)){
				count++;
			}
		}
	} 
	if(count>1){
		cout<<"Not Unique";
	}
	else if(count==0)
	{
		cout<<"Not Exist";
	}
	return 0;
}
