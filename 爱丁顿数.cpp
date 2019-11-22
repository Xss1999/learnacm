#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	 int n;
	 cin>>n;
	 int a[n+1];
	 for(int i=1;i<=n;i++){
	 	cin>>a[i];
	 }
	 sort(a+1,a+n+1,cmp);
	 int E=0;
	 for(int i=1;E<=n;i++){	 	
	 	if(i<a[i]){
	 		E++;
		 }
		 else
		 {
		 	cout<<E;
		 	break;
		 }
	 }
	return 0;
}
