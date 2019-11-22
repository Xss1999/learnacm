#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int a[100];
	int count=0;
	int k=0;

    for(int i=1;i<=n;i++) 
    {
    	int flag =0;

    	for(int j=2;j<=sqrt(i);j++)
    	{

    		if(i%j==0)
    		{
    			flag = 1;
    			break;
			}
		}
		if(flag ==0)
		{
			a[k++] = i;

		}

	}


    for(int i=1;i<k+1;i++)
    {
    	if((a[i]-a[i-1]) == 2)
    	{
    		count++;
    		
		}
	}
	
	cout <<count;
	return 0;
 } 
