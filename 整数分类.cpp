#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >>N;
	int num;
	int A1=0,A2=0,A3=0,A5=0;
	double A4=0.0;
	vector<int> a[5];
	for(int i=0;i<N;i++){
		cin>>num;
		a[num%5].push_back(num);
	}
	int x=1,y=0;
	double sum=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<a[i].size();j++){
			if(i==0 && a[i][j]%2==0){
				A1+=a[i][j];
			}
			if(i==1){
				A2+=x*a[i][j];
				x = -1*x;
				y++;
			}
			if(i==3){
				sum+=a[i][j];
			}
			if(i==4){
				if(a[i][j]>A5){
					A5 = a[i][j];
				}
			}
		}
	}
	A3 = a[2].size();
	A4 = sum/a[3].size();
	if(A1==0){
		cout<<"N ";
	}
	else
	{
		cout<<A1<<" ";
	}
	if(y==0){
		cout<<"N ";
	}
	else
	{
		cout<<A2<<" ";
	}
	if(A3==0){
		cout<<"N ";
	}
	else
	{
		cout<<A3<<" ";
	}
	if(a[3].size()==0){
		cout<<"N ";
	}
	else
	{
		cout<<fixed<<setprecision(1)<<A4<<" ";
	}
	if(A5==0){
		cout<<"N";
	}
	else
	{
		cout<<A5;
	}
	return 0;
}
