#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char a;
	cin>>n>>a;
	int j;
	if(n%2==0){
		j = n/2;
	}
	else
	{
		j = n/2+1;
	}
	for(int k=1;k<j+1;k++){
		for(int i=0;i<n;i++){
			if(k==1 || k==j){
				cout<<a;
			}
			else
			{
				if(i==0 || i==n-1){
					cout<<a;
				}
				else
				{
					cout<<" ";
				}
				
			}
	    }
	    cout<<endl;
	}
	
	return 0;
} 
