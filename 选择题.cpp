#include<bits/stdc++.h>
using namespace std;

struct Problem{
	int num;
	int wrong;
	int fullmark;
	int fulloption;
	int correctoption;
	set<char> option;
};

bool cmp(Problem a,Problem b){
	return a.wrong!=b.wrong?a.wrong>b.wrong:a.num<b.num;
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<Problem> prm(m);
	for(int i=0;i<m;i++){
		cin>>prm[i].fullmark>>prm[i].fulloption>>prm[i].correctoption;
        for(int j=0;j<prm[i].correctoption;j++){
        	char c;
        	scanf(" %c",&c);
        	prm[i].option.insert(c);
		}
		prm[i].num=i+1;
		prm[i].wrong=0;
	}

    for(int i=0;i<n;i++){
    	int sum_score=0;
    	int x;
    	scanf("\n");
    	for(int j=0;j<m;j++){   		
    		if(j!=0){
    			scanf(" ");
			}   		
    		scanf("(%d",&x);   		
    		set<char> s;    		
    		for(int k=0;k<x;k++){
    			char a;
    			scanf(" %c",&a);
    			s.insert(a);
			} 
			scanf(")");			
    		if(s==prm[j].option){
    			sum_score+=prm[j].fullmark;
			}
			else
			{
				prm[j].wrong++;
			}			
		}		
		cout<<sum_score<<endl;
	}
	sort(prm.begin(),prm.end(),cmp);
	
	if(prm[0].wrong==0){
		cout<<"Too simple";
	}
	else
	{
		cout<<prm[0].wrong<<" "<<prm[0].num;
	for(int i=1;i<m;i++){
		if(prm[i].wrong==prm[0].wrong){
			cout<<" "<<prm[i].num;
		}
		else
		{
			break;
		}
	}
	}
	
	return 0;
}
