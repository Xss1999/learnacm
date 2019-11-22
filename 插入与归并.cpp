#include<bits/stdc++.h>
using namespace std;

bool MergeSort(int a[],int b[],int n){
	int flag=0;
	int step;
	for(step=2;step/2<=n;step*=step){
		for(int i=1;i<n+1;i+=step){
			sort(a+i,a+min(i+step,n+1));
		}
		
		for(int k=1;k<n+1;k++){
			if(a[k]!=b[k]){
				break;
			}
			if(k==n){
				cout<<"Merge Sort"<<endl;
				flag = 1;
			}
		}
		if(flag==1){
			break;
		}
	}
	step*=step;
	for(int i=1;i<n+1;i+=step){
			sort(a+i,a+min(i+step,n+1));
		}
		
		if(flag==1){
			for(int k=1;k<n+1;k++){
				cout<<a[k];
				if(k!=n){
					cout<<" ";
				}
			}	
			return true;	
		}
	return false;	
}

int main(){
	int n;
	cin>>n;
	int *a,*b,*c,*d;
	a = new int[n+1];
	b = new int[n+1];
	c = new int[n+1];
	d = new int[n+1];	
	for(int i=1;i<n+1;i++){
		cin>>a[i];
		c[i] = a[i];
	}
	for(int i=1;i<n+1;i++){
		cin>>b[i];
		d[i] = b[i];
	}
	int x;
	for(int i=1;i<n+1;i++){
		if(b[i]>b[i+1]){
			x = i;
			break;
		}
	}
	int i;
	for(i=x+1;i<n+1;i++){
		if(a[i]!=b[i]){
			break;
		}
	}
	if(i==n+1){
		cout<<"Insertion Sort"<<endl;
		sort(b+1,b+x+1);
		for(int k=1;k<n+1;k++){
			cout<<b[k];
			if(k!=n){
				cout<<" ";
			}
		}
	}else
	{
		MergeSort(c,d,n);
	}
	
	return 0;
}
