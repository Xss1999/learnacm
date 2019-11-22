#include<bits/stdc++.h>
using namespace std;
struct prom{
	int fullmark;
	int solution;
};
int main(){
	int n,m;
	cin>>n>>m;
	vector<prom> p(m);
	for(int i=0;i<m;i++){
		cin>>p[i].fullmark;
	}
	for(int i=0;i<m;i++){
		cin>>p[i].solution;
	}
	for(int i=0;i<n;i++){		
		int score=0;
		for(int j=0;j<m;j++){
			int temp;
		    cin>>temp;
			if(temp==p[j].solution){
			score+=p[j].fullmark;
		    }
		}
		
		cout<<score<<endl;
	}
	
	return 0;
}
