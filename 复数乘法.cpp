#include<bits/stdc++.h>
using namespace std;

int main(){
	double r1,p1,r2,p2;
	cin>>r1>>p1>>r2>>p2;
	double a1 = r1*cos(p1);
	double b1 = r1*sin(p1);
	double a2 = r2*cos(p2);
	double b2 = r2*sin(p2);
	double a = a1*a2+b1*b2*(-1);
	double b = a1*b2+a2*b1;
	if(a+0.05>=0 && a<0){
		printf("0.00");
	}
	else
	{
		printf("%.2f",a);
	}
	if(b>=0){
		printf("+%.2fi",b);
	}
	else if(b+0.05>=0 && b<0){
		printf("+0.00i");
	}
	else
	{
		printf("%.2fi",b);
	}
	return 0;
}
