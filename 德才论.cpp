#include<bits/stdc++.h>
using namespace std;

struct student{
	int num;
	int d;
	int c;
	int sum;
};

bool cmp(student a,student b){
	if(a.sum!=b.sum){
				return a.sum>b.sum;
			}
			else{
				if(a.d!=b.d){
					return a.d>b.d;
				}
				else{
					return a.num<b.num;
				}
				
			}
}

int main(){
	int N,L,H;
	//cin>>N>>L>>H;
	scanf("%d%d%d",&N,&L,&H);
	int count1=0;
	
	student *stu;
	stu = new student[N+1];
	vector<student> v1,v2,v3,v4;
	int s=0;
	for(int i=0;i<N;i++){
		//cin>>stu[i].num>>stu[i].d>>stu[i].c;
		scanf("%d%d%d",&stu[i].num,&stu[i].d,&stu[i].c);
		stu[i].sum = stu[i].d + stu[i].c;
		if(stu[i].d>=L && stu[i].c>=L){
			s++;
			if(stu[i].d>=H && stu[i].c>=H){
				v1.push_back(stu[i]);
				continue;
			}
			if(stu[i].d>=H && stu[i].c>=L){
				v2.push_back(stu[i]);
				continue;
			}
			if(stu[i].d>=L && stu[i].c>=L && stu[i].d>=stu[i].c){
				v3.push_back(stu[i]);
				continue;
			}
			v4.push_back(stu[i]);
		}		
	}
	student temp;
	
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	sort(v3.begin(),v3.end(),cmp);
	sort(v4.begin(),v4.end(),cmp);
	
	
	cout<<s<<endl;
	for(int i=0;i<v1.size();i++){
		//cout<<v1[i].num<<" "<<v1[i].d<<" "<<v1[i].c<<endl;
		printf("%d %d %d\n",v1[i].num,v1[i].d,v1[i].c);
	}
	for(int i=0;i<v2.size();i++){
		//cout<<v2[i].num<<" "<<v2[i].d<<" "<<v2[i].c<<endl;
		printf("%d %d %d\n",v2[i].num,v2[i].d,v2[i].c);
	}
	for(int i=0;i<v3.size();i++){
		//cout<<v3[i].num<<" "<<v3[i].d<<" "<<v3[i].c<<endl;
		printf("%d %d %d\n",v3[i].num,v3[i].d,v3[i].c);
	}

	for(int i=0;i<v4.size();i++){
		//cout<<v4[i].num<<" "<<v4[i].d<<" "<<v4[i].c<<endl;
		printf("%d %d %d\n",v4[i].num,v4[i].d,v4[i].c);
	}
	return 0;
}
