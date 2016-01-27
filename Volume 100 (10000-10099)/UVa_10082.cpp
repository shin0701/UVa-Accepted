//UVa 10082

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	string keyboard="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	while(getline(cin, input)){
		for(int a=0;a<input.length();a++){
			if((((int)input[a]>=33&&(int)input[a]<=96)||((int)input[a]>=123&&(int)input[a]<=126))&&input[a]!='Q'&&input[a]!='A'&&input[a]!='Z'){
				int index=keyboard.find(input[a]);
				cout<<keyboard[index-1];
			}
			else{
				cout<<input[a];
			}
		}
		cout<<endl;
	}
	return 0;
}
