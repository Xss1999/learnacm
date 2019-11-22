#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *lchild,*rchild;
};

void insert(node* &root,int data){
	if(root==NULL){
		root = new node;
		root->data = data;
		root->lchild = root->rchild = NULL;
		return;
	}
	if(data<root->data){
		insert(root->lchild,data);
	}
	else
	{
		insert(root->rchild,data);
	}
}

void preOrder(node* root,vector<int> &vi){
	if(root==NULL){
		return;
	}
	vi.push_back(root->data);
	preOrder(root->lchild,vi);
	preOrder(root->rchild,vi);
}

void postOrder(node* root,vector<int> &vi){
	if(root==NULL){
		return;
	}
	postOrder(root->lchild,vi);
	postOrder(root->rchild,vi);
	vi.push_back(root->data);
}

void preordermirror(node* root,vector<int> &vi){
	if(root==NULL){
		return;
	}
	vi.push_back(root->data);
	preordermirror(root->rchild,vi);
	preordermirror(root->lchild,vi);
}

void postOrdermirror(node* root,vector<int> &vi){
	if(root==NULL){
		return;
	}
	postOrdermirror(root->rchild,vi);
	postOrdermirror(root->lchild,vi);
	vi.push_back(root->data);
}

vector<int> origin,pre,post,prem,postm;
int main(){
	int n;
	cin>>n;
	node *root = NULL;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		origin.push_back(temp);
		insert(root,temp);
	}
	preOrder(root,pre);
	postOrder(root,post);
	preordermirror(root,prem);
	postOrdermirror(root,postm);
	if(origin==pre){
		cout<<"Yes"<<endl;
		for(int i=0;i<post.size();i++){
			cout<<post[i];
			if(i!=post.size()-1){
				cout<<" ";
			}
		}
	}
	else
	{
		if(origin==prem){
			cout<<"Yes"<<endl;
			for(int i=0;i<postm.size();i++){
				cout<<postm[i];
				if(i!=postm.size()-1){
					cout<<" ";
				}
			}
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
} 
