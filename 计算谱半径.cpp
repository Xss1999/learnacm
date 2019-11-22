#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	double max=0;
	for(int i=0;i<n;i++){
		double a,b;
		cin>>a>>b;
		double x = sqrt(a*a+b*b);
		if(x>max){
			max = x;
		}
	}
	printf("%.02f",max);
	return 0;
}
