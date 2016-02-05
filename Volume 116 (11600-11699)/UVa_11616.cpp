//UVa 11616

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	int number[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	string input;
	
	while(cin>>input){
		//Number to Roman
		if(isdigit(input[0])){
			int inputN=stoi(input);
			string output="";
			
			for(int b=0;b<13;b++){
				while(inputN>=number[b]){
					inputN-=number[b];
					output+=roman[b];
				}
			}
			
			cout<<output<<endl;
		}
		//Roman to Number
		else{
			int output=0;
			
			for(int a=0;a<13;a++){
				while(input.find(roman[a])==0){
					output+=number[a];
					input=input.substr(roman[a].size());
				}
			}
			
			cout<<output<<endl;
		}
	}
	return 0;
}
