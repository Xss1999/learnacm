#include<bits/stdc++.h>
using namespace std;
const int maxn=100;
int mx[maxn][maxn];

int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0}; 
struct node{
	int x,y;
}Node;
bool nx[maxn][maxn]={false};
int n,m;
bool judge(int x,int y){
	if(x>=n || x<0 || y>=m || y<0){
		return false;
	}
	if(mx[x][y]==0 || nx[x][y]==true){
		return false;
	}
	return true;
}
int BFS(int x,int y){
	queue<node> q;
	Node.x = x;
	Node.y = y;
	q.push(Node);
	nx[x][y]=true;
	while(!q.empty()){
		node top = q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int newx = top.x+X[i];
			int newy = top.y+Y[i];
			if(judge(newx,newy)){
				Node.x = newx;
				Node.y = newy;
				q.push(Node);
				nx[newx][newy]=true;
			}
		}
	}
}
int main(){
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mx[i][j];
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mx[i][j]==1 && nx[i][j]==false){
				count++;
				BFS(i,j);
			}
		}
	}
	cout<<endl;
	cout<<count;
	return 0;
} 
