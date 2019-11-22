#include<bits/stdc++.h>
using namespace std;

struct people{
	int s=0,p=0,f=0,c=0,j=0,b=0;	
};

void cmp(people J){
	if(J.b>=J.c){
		if(J.c>=J.j){
			cout<<'B';
		}
		else if(J.b<J.j){
			cout<<'J';
		}
		else if(J.j==J.b){
			cout<<'B';
		}
	}
	else if(J.c>J.b){
		if(J.b>=J.j){
			cout<<'C';
		}
		else if(J.j>J.c){
			cout<<'J';
		}
		else if(J.j==J.c){
			cout<<'C';
		}
	}
}

int main(){
	int N;
	cin>>N;
	people J,Y;
	for(int i=0;i<N;i++){
		char x,y;
		cin>>x>>y;
		if(x=='C' && y=='J'){
			J.s++;
			Y.f++;
			J.c++;
		}
		else if(y=='C' && x=='J'){
			J.f++;
			Y.s++;
			Y.c++;
		}
		else if(x=='J' && y=='B'){
			J.s++;
			Y.f++;
			J.j++;
		}
		else if(y=='J' && x=='B'){
			Y.s++;
			J.f++;
			Y.j++;
		}
		else if(x=='B' && y=='C'){
			J.s++;
			Y.f++;
			J.b++;
		}
		else if(y=='B' && x=='C'){
			Y.s++;
			J.f++;
			Y.b++;
		}
		else if(x==y){
			J.p++;
			Y.p++;
		}
	}
	
	cout<<J.s<<" "<<J.p<<" "<<J.f<<endl;
	cout<<Y.s<<" "<<Y.p<<" "<<Y.f<<endl;
	
	cmp(J);
	cout<<" "; 
	cmp(Y);
		
	return 0;
} 
