#include<bits/stdc++.h>
using namespace std;
int n,m,s;
const int maxn=110;
struct Node{
	int weight;
	vector<int> child;
}node[maxn];
int path[maxn];

bool cmp(int a,int b){
	return node[a].weight>node[b].weight;
}

void DFS(int index,int nodenum,int sum){
	if(sum>s){
		return;
	}
	if(sum==s){
		if(node[index].child.size()!=0){
			return;
		}
		for(int i=0;i<nodenum;i++){
			cout<<node[path[i]].weight;
			if(i!=nodenum-1){
				cout<<" ";
			}	
			else
			{
				cout<<endl;
					}		
		}		
		return;
	}
	for(int i=0;i<node[index].child.size();i++){
		int child = node[index].child[i];
		path[nodenum] = child;
		DFS(child,nodenum+1,sum+node[child].weight);
	}
}

int main(){	
	cin>>n>>m>>s;
	for(int i=0;i<n;i++)
	{
		cin>>node[i].weight;
	}
	for(int i=0;i<m;i++){
		int id,k;
		cin>>id>>k;
		for(int j=0;j<k;j++){
			int childid;
			cin>>childid;
			node[id].child.push_back(childid);
		}
		sort(node[id].child.begin(),node[id].child.end(),cmp);
	}
	path[0] = 0;
	DFS(0,1,node[0].weight);
	return 0;
} 
