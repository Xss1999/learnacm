#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char m;
	cin>>n>>m;
	int count=0,count1=1;
	int floor = sqrt((n+1)/2);
	for(int i=floor;i>=1;i--){
		if(i!=floor){
			for(int k=0;k<count1;k++){
				cout<<" ";
			}
			count1++;
		}
		for(int j=0;j<2*i-1;j++){
			cout<<m;
			count++;
		}		
		cout<<endl;
	}
    count1--;
    count1--;
	for(int i=2;i<=floor;i++){
		if(i!=floor){
			for(int k=0;k<count1;k++){
				cout<<" ";
			}
			count1--;
		}
		for(int j=0;j<2*i-1;j++){
			cout<<m;
			count++;
		}		
		cout<<endl;
	}
	cout<<n-count;
	return 0;
}
