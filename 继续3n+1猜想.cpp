#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
	return a>b;
 } 
int main()
{
	int a[100000] = {0};
	int c[10001] = {0};
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int x = a[i];
		while(x!=1)
		{
			if(x%2!=0)
			{
				x = 3*x+1;
			}
			x = x/2;
			c[x] = 1;
		}
	}
	int b[10001] = {0};
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(c[a[i]]==0)
		{
			b[j] = a[i];
			j++;
		}
	}
	sort(b,b+j,compare);
	for(int i=0;i<j;i++)
	{
		cout <<b[i];
		if(i!=j-1)
		{
			cout <<" ";
		 } 
	}
	return 0;
}
