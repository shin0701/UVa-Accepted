//UVa 10222

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	string keyboard="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while(getline(cin, input)){
		for(int a=0;a<input.length();a++){
			if(input[a]!=' '){
				int index;
				if(input[a]>='A'&&input[a]<='Z'){
					index=keyboard.find((char)((int)input[a]+32));
				}
				else{
					index=keyboard.find(input[a]);
				}
				
				cout<<keyboard[index-2];
			}
			else{
				cout<<input[a];
			}
		}
		cout<<endl;
	}
	return 0;
}
