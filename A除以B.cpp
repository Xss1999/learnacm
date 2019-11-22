#include<bits/stdc++.h>
using namespace std;

int convert(string s){
	stringstream ss;
	ss<<s;
	int t;
	ss>>t;
	return t;
}

string convert1(int a){
	stringstream ss;
	ss<<a;
	return ss.str();
}

int main(){
	string A;
	int B;
	string Q = "";
	cin>>A>>B;
	
	string s="";
	for(int i=0;i<A.length();i++){
		s = s + A[i];
		int num = convert(s);
		if(num<B){
			Q = Q+"0";
			continue;
		}
		else
		{
			Q = Q + convert1(num/B);
			s = convert1(num%B);
			continue;
		}
	}
	if(Q[0]=='0' && Q.length()==1){
		cout<<0<<" "<<convert(A)%B;
	}
	else if(Q[0]=='0'){
		string QQ="";
		for(int i=1;i<Q.length();i++){
			QQ = QQ+Q[i];
		}
		cout<<QQ<<" "<<convert(s);
	}
	else
	{
		cout<<Q<<" "<<convert(s);
	}
	
	return 0; 
}
