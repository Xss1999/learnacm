#include<bits/stdc++.h>
using namespace std;

int randpartion(int a[],int left,int right){
	int p = round(1.0*rand()/RAND_MAX*(right-left)+left);
	swap(a[p],a[left]);
	int temp=a[left];
	while(left<right){
		while(left<right && a[right]>temp){
			right--;
		}
		a[left] = a[right];
		while(left<right && a[left]<=temp){
			left++;
		}
		a[right] = a[left];
	}
	a[left] = temp;
	return left;
}

void randselect(int a[],int left,int right,int k){
	if(left==right){
		return;
	}
	int p = randpartion(a,left,right);
	int m = p-left+1;
	if(m==k){
		return;
	}
	else if(m>k){
		randselect(a,left,p-1,k);
	}
	else if(m<k){
		randselect(a,p+1,right,k-m);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	int sum=0,sum1=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	randselect(a,0,n-1,n/2);
	for(int i=0;i<n/2;i++){
		sum1+=a[i];
	}
	cout<<(sum-sum1)-sum1;
	return 0;
} 
