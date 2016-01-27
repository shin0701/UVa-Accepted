//UVa 11713

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		for(int a=0;a<input;a++){
			string before, after;
			cin>>before>>after;
			
			bool check=true;
			if(before.length()!=after.length()){
				check=false;
			}
			else{
				for(int b=0;b<before.length();b++){
					if(before[b]!=after[b]&&
						((before[b]!='a'&&before[b]!='e'&&before[b]!='i'&&before[b]!='o'&&before[b]!='u')||
						(after[b]!='a'&&after[b]!='e'&&after[b]!='i'&&after[b]!='o'&&after[b]!='u'))){
						check=false;
					}
				}
			}
			
			if(check==true){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
