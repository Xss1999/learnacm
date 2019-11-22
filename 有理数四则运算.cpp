#include<bits/stdc++.h>
using namespace std;

void add(int k,int a,int b,int a1,int b1,int a2,int b2){
	k = (a1+b2*a2)/b1;
	a = abs((a1+b2*a2)%b1);
	b = b1;
	if(k<0){
		if(a1<b1){
			printf("%d/%d + (%d) = (%d %d/%d)\n",a1,b1,k,a,b);
		}
		
	}
	else
	{
		printf("%d %d/%d\n",k,a,b);
	}
}

int main(){
	int a1,b1,a2,b2,k,a,b;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	
	
	return 0;
}
