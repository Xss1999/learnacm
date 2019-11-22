#include<bits/stdc++.h>
using namespace std;

int main(){
	double D;
	double e,flag1=0,flag2=0,n;
	cin>>n>>e>>D;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		double count=0;
		for(int j=0;j<k;j++){
			double E;
			cin>>E;
			if(E<e){
				count++;
			}
		}		
		if(k>D && count>k/2.0){
			flag2++;
		}
		else if(count>k/2.0){
			flag1++;
		}
	}
	printf("%.1f%% ",flag1/n*100);
	printf("%.1f%%",flag2/n*100);
	return 0;
}
