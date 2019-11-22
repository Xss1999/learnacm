#include<bits/stdc++.h>
using namespace std;

int main(){
	int A,B,D;
	cin>>A>>B>>D;
	int s;
	s = A + B;
	vector<int> v;
	int x,y;
	for(int i=0;;i++){
		x=s/D;
		y=s%D;
		v.push_back(y);
		s=x;
		if(s==0){
			v.push_back(x);
			break;
		}
	}
	for(int i=v.size()-1;i>=0;i--){
		if(i==v.size()-1){
			v[i]==0;
			continue;
		}
		cout<<v[i];
	}
	return 0;
}
