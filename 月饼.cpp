#include<bits/stdc++.h>
using namespace std;

struct Yb{
	double dj;
	double sl;
};

bool cmp(Yb x,Yb y){
	return x.dj>y.dj;
}

int main(){
	int N,D;
	cin>>N>>D;
	Yb *yb;
	yb = new Yb[N+1];
	double zj;
	for(int i=0;i<N;i++){
		cin>>yb[i].sl;
	}
	for(int i=0;i<N;i++){
		cin>>zj;
		yb[i].dj = zj/yb[i].sl;
	}
	sort(yb,yb+N,cmp);
	double sy=0;
	for(int i=0;i<N;i++){
		if(yb[i].sl>=D){
			sy += D*yb[i].dj;
			break;
		}
		else if(yb[i].sl<D){
			sy +=yb[i].sl*yb[i].dj;
			D = D - yb[i].sl;
		}
	}
	printf("%.2lf",sy);
	return 0;
} 
