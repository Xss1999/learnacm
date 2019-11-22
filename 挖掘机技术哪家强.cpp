#include<bits/stdc++.h>
using namespace std;
struct People{
	int num;
	int score;
	int flag;
};
bool cmp(People p1,People p2){
	return p1.score>p2.score;
}
int main(){
	int n;
	cin>>n;
	People *people;
	people = new People[n+1];
    for(int i=0;i<n+1;i++){
    	people[i].flag = 0;
    	people[i].score = 0;
	}
	int num,score;
	//cout<<people[1].score<<endl;
	for(int i=0;i<n;i++){
		cin>>num>>score;
		people[num].score +=score;
		people[num].flag = 1;
		people[num].num = num;
		//cout<<people[num].score<<endl;
	}
	//cout<<people[1].num<<" "<<people[1].score<<" "<<people[1].flag<<endl;
	sort(people,people+n,cmp);
	for(int i=0;i<n+1;i++){
		if(people[i].flag==1){
			cout<<people[i].num<<" "<<people[i].score;
			break;
		}
	}
	return 0;
}
