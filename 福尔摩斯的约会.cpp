#include<bits/stdc++.h>
using namespace std;

string tostring(int num){
	stringstream ss;
	ss<<num;	
	return ss.str();
}
int main(){
	//vector<string> s[4];
	int a=0,b=0; 
	string s[4];
	for(int i=0;i<4;i++){
		cin >>s[i];
		//s[i].push_back(ss);
	}
	int count2=0; 
	for(int i=0;i<min(s[0].length(),s[1].length());i++){
		if((s[0][i]==s[1][i])&&(s[0][i]<='G' && s[0][i]>='A')){
			a = s[0][i] - 'A'+1;//ÐÇÆÚa
			count2 = i;
			break;
		}				
	}
	for(int i=count2+1;i<min(s[0].length(),s[1].length());i++){
		if((s[0][i]==s[1][i])&&(isdigit(s[0][i]) || (s[0][i]<='N' && s[0][i]>='A'))){
			if(isdigit(s[0][i])){
				b = s[0][i]-'0';
			}
			else if(s[0][i]<='N' && s[0][i]>='A'){
				b = s[0][i] - 'A' + 10;
			}	        
	        break;
		}				
	}
	int c;
	for(int i=0;i<min(s[2].length(),s[3].length());i++){
		if((s[2][i]==s[3][i])&&(isalpha(s[2][i]))){
			c = i;//·ÖÖÓ 
			break;
		}
	}
	string cc;
	if(c<10){
	
		cc = "0"+tostring(c);
	}
	else
	{
		cc = ""+tostring(c);
	}
	string bb;
	if(b<10){
	
		bb = "0"+tostring(b);
	}
	else
	{
		bb = ""+tostring(b);
	}
	string str[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cout<<str[a-1]<<" "<<bb<<":"<<cc;
	return 0;
}

//3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm
