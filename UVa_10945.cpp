//UVa 10945

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	string input;
	while(getline(cin, input)){
		if(input=="DONE"){
			break;
		}
		
		string data;
		for(int b=0;b<input.length();b++){
			input[b]=toupper(input[b]);
			if(input[b]>='A'&&input[b]<='Z'){
				data+=input[b];
			}
		}
		
		bool palindrome=true;
		for(int a=0;a<data.length()/2+1;a++){
			//check palindrome
			if(data[a]!=data[data.length()-a-1]){
				palindrome=false;
			}
		}
		
		if(palindrome==false){
			cout<<"Uh oh.."<<endl;
		}
		else{
			cout<<"You won't be eaten!"<<endl;
		}
	}
	return 0;
}
