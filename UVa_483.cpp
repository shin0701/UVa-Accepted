//UVa 483

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string input;
	bool check=false;
	while(getline(cin, input)){
		string token="";
		for(int a=0; a<input.length(); a++){
			if(input[a]!=' '){
				token+=input[a];
				if(a==input.length()-1){
					for(int b=token.length()-1;b>=0;b--){
						cout<<token[b];
					}
					token="";
				}
			}
			else{
				for(int b=token.length()-1;b>=0;b--){
					cout<<token[b];
				}
				cout<<" ";
				token="";
			}
		}
		cout<<endl;
	}
	return 0;
}
