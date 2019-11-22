#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
	if(x<=1){
		return false;
	}
	int sqr = (int)sqrt(1.0*x);
	for(int i=2;i<=sqr;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int a[10000];
	fill(a,a+10000,3);
	for(int i=0;i<n;i++){
		int num = i+1;
		int id;
		cin>>id;
		if(num==1){
			a[id]=0;
		}
		else if(isprime(num))
		{
			a[id]=1;
		}
		else
		{
			a[id]=2;
		}
	}
	
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int id;
		cin>>id;
		printf("%04d: ",id);
		
		if(a[id]==3){
			cout<<"Are you kidding?";
		}
		else if(a[id]==0)
		{
			cout<<"Mystery Award";
			a[id]=4;
		}
		else if(a[id]==1){
			cout<<"Minion";
			a[id]=4;
		}
		else if(a[id]==4)
		{
			cout<<"Checked";
		}
		else if(a[id]==2){
			cout<<"Chocolate";
			a[id]=4;
		}
		if(i!=k-1){
			cout<<endl;
		}
	}
	return 0;
}
