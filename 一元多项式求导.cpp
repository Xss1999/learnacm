
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int xishu;
	int zhishu;
	int flag=0;
	while(cin >>xishu>>zhishu)
	{
		if((zhishu==0)&&(flag==0))
		{		
            
			cout <<"0 0";

		}
		else if(zhishu!=0)
		{
			if(flag>0)
		    {
		    	cout <<" ";
			}
		    cout <<xishu*zhishu<<" "<<zhishu-1;		    
		    flag++;
		}
			 
	}
	return 0;
 } 
