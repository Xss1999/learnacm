#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	double sum=0;
	double count=0;
	char a[50];
	char b[50];
	for(int i=0;i<n;i++){		
		scanf("%s",a);
		double temp;
		sscanf(a,"%lf",&temp);
		sprintf(b,"%.2f",temp);
		int flag=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]!=b[j]){
				flag=1;
				break; 
			}
		}
		if(flag==1 || temp<-1000 || temp>1000){
			printf("ERROR: %s is not a legal number\n",a);
			continue;
		}
		else
		{
			sum+=temp;
			count++;
		}
	}
	if(count>1){
		printf("The average of %d numbers is %.2f\n",(int)count,sum/(count*1.00));
	}
	else if(count==1){
		printf("The average of 1 number is %.2f\n",sum);
	}
	else if(count==0){
		printf("The average of 0 numbers is Undefined\n");
	}
	return 0;
}
