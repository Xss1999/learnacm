#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<char>c;
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	for(int i=0;str2[i];i++)
	{
		c.insert(str2[i]);
	 } 
	 bool flag = false;
	 for(int i=str1.length()-1;i>=0;i--)
	 {
	 	if(c.count(str1[i]))
	 	{
	 		continue;
		 }
		 flag = true;
		 cout <<str1[i];
	 }
	 if(!flag)
	 {
	     cout <<"NULL"<<endl;
	 }
	return 0;
 } 
