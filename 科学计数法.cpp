#include<bits/stdc++.h>
using namespace std;

int convert(string s){
	stringstream ss;
	ss<<s;
	int x;
	ss>>x;
	return x;
}

int main(){
	string num;
	cin>>num;
	string A="";
	if(num[0]=='-'){
		cout<<"-";
	}
	for(int i=1;i<num.length();i++){
		if(num[i]=='E'){
			string s="";
			for(int j=i+2;j<num.length();j++){
				s+=num[j];
			}
			int n=convert(s);
			if(num[i+1]=='-')
			{
				for(int x=0;x<n;x++){
					A+="0";
					if(x==0){
						A+=".";
					}
				}
				for(int x=1;x<i;x++){
					if(isdigit(num[x])){
						A+=num[x];
						if(n==0 && x==1){
							A+=".";
						}
					}
				}				 
			}
			else if(num[i+1]=='+'){
				int q;
				for(q=1;q<n+3;q++){
					if(q>=i){
						A+="0";
					}
					else
					{
						if(isdigit(num[q])){
						    A+=num[q];
					    }
					}					
				}
				if(q<i){
					A+=".";
					for(int e=q;e<i;e++){
						A+=num[e];
					}
				}
			}
			break;
		}
	}
	cout<<A;
	return 0;
}
