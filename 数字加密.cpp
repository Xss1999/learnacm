#include<bits/stdc++.h>
using namespace std;
int convert(char a){
	stringstream ss;
	ss<<a;
	int x;
	ss>>x;
	return x;
}
char convert2(int x){
	stringstream ss;
	ss<<x;
	char y;
	ss>>y;
	return y;
}
int main(){
	string a,b;
	char m[13]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
	cin>>a>>b;
	if(a.length()>b.length()){
		b.insert(0,a.length()-b.length(),'0');
	}
	int j = a.length()-1;
	string s="";
	for(int i=b.length()-1;i>=0;i--){
		if(j<0){
			s+=b[i];
			j--;
			continue;
		}
		if((b.length()-i)%2!=0){
			s+=m[(convert(b[i])+convert(a[j]))%13];
		}
		else
		{
			int num = convert(b[i])-convert(a[j]);
			if(num<0){
				num = num+10;
			}
			s+=convert2(num);
		}
		j--;
	}
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}
