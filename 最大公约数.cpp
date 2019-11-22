#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

int main(){
	int x,y;
	cin>>x>>y;
	int d = gcd(x,y);
	
	cout<<x/d*y;
	return 0;
}
