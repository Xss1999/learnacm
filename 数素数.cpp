#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int M,N;
	cin >>M>>N;
	int num=2;
	int count=0;
	vector<int> a;
	while(count<N){
		if(isprime(num)){
	        count++;
	        if(count>=M){
	        	a.push_back(num);
			}
		}
		num++;
	}
	for(int i=0;i<a.size();i++){
		if((i+1)%10 != 1){
			cout<<" ";
		}
		cout<<a[i];
		if((i+1)%10==0){
			cout<<endl;
		}
	}
	return 0;
} 
