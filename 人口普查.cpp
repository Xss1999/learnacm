#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	string name,birth,oldname="",youngname="",oldbirth="2014/09/06",youngbirth="1814/09/06";
	int count=0;
	
	for(int i=0;i<N;i++){
		cin>>name>>birth;
		if(birth>="1814/09/06" && birth<="2014/09/06"){
		    count++;
		    if(birth<=oldbirth){
		    	oldbirth = birth; 
		    	oldname = name;
			}
			if(birth>=youngbirth)
			{
				youngbirth = birth;
				youngname = name;
			}
		
	    }		
	}

    if(count>=1){
    	cout<<count<<" "<<oldname<<" "<<youngname;
	}
	else if(count==0){
		cout<<count;
	}
	return 0;
} 
