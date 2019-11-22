#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	string num;
	cin>>num;
//	if(num[0]==num[1] && num[1]==num[2] && num[2]==num[3]){
//		cout<<num<<" - "<<num<<" = "<<"0000";
//		//printf("%s - %s = 0000",num,num);
//	}
//	else
//	{
		int C;
	num.insert(0,4-num.length(),'0');	
	for(int i=0;;i++){
		string A=num;
		string B=num;
		sort(A.begin(),A.end(),cmp);		
		sort(B.begin(),B.end());
		C = atoi(A.c_str())-atoi(B.c_str());
		stringstream ss;
		ss<<C;
		num = ss.str();
		num.insert(0,4-num.length(),'0');
		cout<<A<<" - "<<B<<" = "<<num;
		//printf("%s - %s = %s",A,B,num);
		if(num== "6174" || num=="0000"){
			break;
		}
		cout<<endl;
	}
//	}	
	return 0;
}

