#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
	if(n<=1){
		return false;
	}
	int sqr = (int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	for(int i=0;i<101;i++){
		if(isprime(i)==true){
			cout<<i<<" ";
		} 
	}
	return 0;
}
