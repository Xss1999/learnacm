#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

void add(int **b,int a[],int m,int n,int N){
	int t=0;
	int level = m / 2 + m % 2;
    for (int i = 0; i < level; i++) {
        for (int j = i; j <= n - 1 - i && t <= N - 1; j++)
                b[i][j] = a[t++];
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++)
                b[j][n - 1 - i] = a[t++];
        for (int j = n - i - 1; j >= i && t <= N - 1; j--)
                b[m - 1 - i][j] = a[t++];
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--)
                b[j][i] = a[t++];
    }
}

int main(){
	int N;
	cin>>N;
	int a[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	sort(a,a+N,cmp);
	int m,n;
	for(int i=sqrt(N);i>=1;i--){
		if(N%i==0){
			n = i;
			break;
		}
	}
	m = N/n;
	int **b;
	b = new int *[m];
	for(int i=0;i<m;i++){
		b[i] = new int[n];
		for(int j=0;j<n;j++){
			b[i][j]=0;
		}
	}
	  
	add(b,a,m,n,N);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j];
			if(j!=n-1){
				cout<<" ";
			}
		}
		if(i!=m-1){
			cout<<endl;
		}
	}
	return 0;
}
