#include<bits/stdc++.h>
using namespace std;
int n,a;
int d(int n)
{
	if(n>1)
	{
		return d(n-1)+n*n*n+n+4;
	}
	else
	{
		return a;
	}
}
int main()
{
	while(cin>>n>>a)
	{
		cout <<d(n)<<endl;
	}
	return 0;
}
