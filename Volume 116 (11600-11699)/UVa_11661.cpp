//UVa 11661

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
	int length;
	while(cin>>length){
		if(length==0){
			break;
		}
		
		string input;
		cin>>input;
		
		if(input.find("Z")<input.length()){
			cout<<"0"<<endl;
			continue;
		}
		
		char now=' ';
		int minD=2000001, R=-1, D=-1;
		for(int a=0;a<input.length();a++){
			if(input[a]=='R'){
				if(now=='D'){
					minD=min(minD, a-D);
				}
				now='R';
				R=a;
			}
			else if(input[a]=='D'){
				if(now=='R'){
					minD=min(minD, a-R);
				}
				now='D';
				D=a;
			}
		}
		
		cout<<minD<<endl;
	}
	return 0;
}
