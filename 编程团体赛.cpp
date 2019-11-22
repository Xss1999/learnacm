#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int team[1000]={0};
	int grade,num,team_num;
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&team_num,&num,&grade);
		team[team_num] = team[team_num]+grade;
	}
	int max=0,a=0;
	for(int i=0;i<1000;i++){
		if(team[i]>max){
			max = team[i];
			a = i;
		}
	}
	cout<<a<<" "<<max;
	return 0;
}
