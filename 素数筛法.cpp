#include<bits/stdc++.h>
using namespace std;

void findprime(bool a[],int b[]){
	int num=0;
	for(int i=2;i<101;i++){
		if(a[i]==false){
			b[num++] = i;
			for(int j=i+i;j<101;j+=i){
				a[j] = true;
			}
		}
	}
	for(int i=0;i<num;i++){
		cout<<b[i]<<" ";
	}
}

int main(){
	bool a[100]={false};
	int b[100];
	findprime(a,b);
	 
	return 0;
} 
