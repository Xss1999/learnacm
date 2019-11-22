#include<bits/stdc++.h>
using namespace std;

int main(){
	string pwd;
	int n;
	cin>>pwd>>n;
	getchar();
	string str;
	for(int i=1;;i++){		
		getline(cin,str);
		if(str=="#"){
			break;
		}
		if(str!=pwd && i<=n){
			cout<<"Wrong password: "<<str<<endl;          
		}
        if(str==pwd && i<=n)
		{
			cout<<"Welcome in"<<endl;
			break;
		}	
        if(i==n){
			cout<<"Account locked"<<endl;
			break;
		}		
	}
	return 0;
}
