#include<bits/stdc++.h>
using namespace std;

struct mark{
	int up;
	int dowm;
};
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	struct mark m1,m2;	
	int k;
	scanf("%d/%d %d/%d %d",&m1.up,&m1.dowm,&m2.up,&m2.dowm,&k);
	
	if(m1.up*m2.dowm>m2.up*m1.dowm){
		swap(m1,m2);
	}
	int num=1;
	while(num*m1.dowm<=m1.up*k){
		num++;
	}
	int count=0;
	while(num*m2.dowm<m2.up*k){
		if(gcd(num,k)==1){
			count++;
			if(count!=1){
				cout<<" ";
			}
			printf("%d/%d",num,k);
		}
		num++;
	}
	return 0;
}
