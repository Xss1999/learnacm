#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int j=n,k=1;
	double sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*j*k;
		j--;
		k++;
	}
	printf("%.2f",sum);
	return 0;
}
