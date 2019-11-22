#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100010]={0};
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		a[num]++;
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int num2;
		cin>>num2;
		cout<<a[num2];
		if(i!=k-1){
			cout<<" ";
		}
	}
	return 0;
}
