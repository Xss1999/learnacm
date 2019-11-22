#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,a,b,k;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&k);
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			int temp;
			scanf("%d",&temp);
			if(temp>=a && temp<=b){
				temp=k;
			}
			printf("%03d",temp);
			if(j!=n-1){
				printf(" ");
			}
		}
		if(i!=m-1){
			printf("\n");
		}
	}
	
	return 0;
} 
