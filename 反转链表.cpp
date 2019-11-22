#include<bits/stdc++.h>
using namespace std;

struct node{
	int addr;
	int data;
	int next;
}; 

int main(){
	int firstaddr;
	int n,k;
	cin>>firstaddr>>n>>k;
	node L[100000];
	vector<node> v;
	
	int addr,data,next;
    for(int i=0;i<n;i++){
    	cin>>addr>>data>>next;
    	L[addr].data = data;
    	L[addr].next = next;
    	L[addr].addr = addr;
	}
	for(int i=firstaddr;i!=-1;i=L[i].next){
		v.push_back(L[i]);
	}

	if(k<=v.size()){
		for(int i=0;i<=v.size()-k;i+=k){
			reverse(&v[i],&v[i+k]);
		}
	}
	//cout<<"---------------------"<<endl;

	for(int i=0;i<v.size();i++){		
		if(i!=v.size()-1){
			printf("%05d %d %05d\n",v[i].addr,v[i].data,v[i+1].addr);
		}
		else
		{
			printf("%05d %d -1",v[i].addr,v[i].data);
	    }		
	}
	return 0;
} 
