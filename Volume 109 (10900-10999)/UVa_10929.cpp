//UVa 10929

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string input;
	while(cin>>input){
		if(input=="0"){
			break;
		}
		
		int number1=0, number2=0;
		for(int a=0;a<input.length();a++){
			if(a%2==0){
				number2+=(int)input[a]-48;
			}
			else{
				number1+=(int)input[a]-48;
			}
		}
		
		if(abs(number1-number2)%11==0){
			cout<<input<<" is a multiple of 11."<<endl;
		}
		else{
			cout<<input<<" is not a multiple of 11."<<endl;
		}
	}
	return 0;
}
