//UVa 1585

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			string input;
			cin>>input;
			
			int score=0, count=0;
			for(int b=0;b<input.length();b++){
				if(input[b]=='O'){
					count++;
					score+=count;
				}
				else{
					count=0;
				}
			}
			
			cout<<score<<endl;
		}
	}
	return 0;
}
