//UVa 11850

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		if(input==0){
			break;
		}
		
		int stations[input]={0};
		for(int a=0;a<input;a++){
			cin>>stations[a];
		}
		sort(stations, stations+input);
		
		bool check=true;
		for(int b=0;b<input;b++){
			if((b==0&&stations[b]>200)||
				(b>0&&stations[b]-stations[b-1]>200)||
				(b==input-1&&(1422-stations[b])*2>200)){
				check=false;
				break;
			}
		}
		
		if(check==true){
			cout<<"POSSIBLE"<<endl;
		}
		else{
			cout<<"IMPOSSIBLE"<<endl;
		}
	}
	return 0;
}
