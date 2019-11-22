#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	long long p;
	cin>>N>>p;
	long long *a;
	a = new long long[N+1];
	long long num;
	for(int i=0;i<N;i++){
		cin>>num;
		a[i] = num;
	} 
	sort(a,a+N);
	for(int i=N-1;i>=0;i--){
		if(a[i]<=a[0]*p){
			cout<<i+1;
			break;
		}
	}
	return 0;
}
