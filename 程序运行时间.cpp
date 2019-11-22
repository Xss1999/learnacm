#include<bits/stdc++.h>
using namespace std;

int convert(int time){
	stringstream ss;
	ss<<time;
	string t = ss.str();
	if((t[t.length()-3]-'0')>=5){
		stringstream ss;
		ss<<t;
		int tt;
		ss>>tt;
		return tt/100+1;
	}
	return time/100;
}

int main(){
	int c2,c1,time;
	cin>>c1>>c2;
	time = c2-c1;
	time = convert(time);
	int hour = time/3600;
	int minute = (time-hour*3600)/60;
	int seconds = time-hour*3600-minute*60;
	printf("%02d:%02d:%02d",hour,minute,seconds);
	return 0;
}
