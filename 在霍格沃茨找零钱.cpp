#include<bits/stdc++.h>
using namespace std;

int main(){
	int P_G,P_S,P_K,A_G,A_S,A_K,C_G,C_S,C_K;
	scanf("%d.%d.%d",&P_G,&P_S,&P_K);
	scanf("%d.%d.%d",&A_G,&A_S,&A_K);
	if(P_G>A_G || (P_G==A_G && P_S>A_S) || (P_G==A_G && P_S==A_S && P_K>A_K)){
		cout<<"-";
		swap(P_G,A_G);
		swap(P_S,A_S);
		swap(P_K,A_K);
	}
	if(A_K>=P_K){
		C_K = A_K-P_K;
	}
	else
	{
		C_K = A_K+29-P_K;
		A_S--;
	}
	if(A_S>=P_S){
		C_S = A_S-P_S;
	}
	else
	{
		C_S = A_S+17-P_S;
		A_G--;
	}
	C_G = A_G - P_G;
	printf("%d.%d.%d",C_G,C_S,C_K);
	return 0;
}
