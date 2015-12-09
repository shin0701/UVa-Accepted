//UVa 401

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	while(cin>>input){
		bool mirrored=true, palindrome=true;
		
		for(int a=0;a<input.length()/2+1;a++){
			//check palindrome
			if(input[a]!=input[input.length()-a-1]){
				palindrome=false;
				
				//check mirrored
				if((input[a]!='A'&&input[a]!='H'&&input[a]!='I'&&input[a]!='M'&&input[a]!='O'&&input[a]!='T'&&input[a]!='U'
				&&input[a]!='V'&&input[a]!='W'&&input[a]!='X'&&input[a]!='Y'&&input[a]!='1'&&input[a]!='8'&&input[a]!='E'
				&&input[a]!='3'&&input[a]!='J'&&input[a]!='L'&&input[a]!='S'&&input[a]!='2'&&input[a]!='Z'&&input[a]!='5')
				||(input[a]=='A'&&input[input.length()-a-1]!='A'||input[a]=='H'&&input[input.length()-a-1]!='H'
				||input[a]=='I'&&input[input.length()-a-1]!='I'||input[a]=='M'&&input[input.length()-a-1]!='M'
				||input[a]=='O'&&input[input.length()-a-1]!='O'||input[a]=='T'&&input[input.length()-a-1]!='T'
				||input[a]=='U'&&input[input.length()-a-1]!='U'||input[a]=='V'&&input[input.length()-a-1]!='V'
				||input[a]=='W'&&input[input.length()-a-1]!='W'||input[a]=='X'&&input[input.length()-a-1]!='X'
				||input[a]=='Y'&&input[input.length()-a-1]!='Y'||input[a]=='1'&&input[input.length()-a-1]!='1'
				||input[a]=='8'&&input[input.length()-a-1]!='8'
				||input[a]=='E'&&input[input.length()-a-1]!='3'||input[a]=='3'&&input[input.length()-a-1]!='E'
				||input[a]=='J'&&input[input.length()-a-1]!='L'||input[a]=='L'&&input[input.length()-a-1]!='J'
				||input[a]=='S'&&input[input.length()-a-1]!='2'||input[a]=='2'&&input[input.length()-a-1]!='S'
				||input[a]=='Z'&&input[input.length()-a-1]!='5'||input[a]=='5'&&input[input.length()-a-1]!='Z')){
					mirrored=false;
				}
			}
			else{
				if(input[a]!='A'&&input[a]!='H'&&input[a]!='I'&&input[a]!='M'&&input[a]!='O'&&input[a]!='T'
				&&input[a]!='U'&&input[a]!='V'&&input[a]!='W'&&input[a]!='X'&&input[a]!='Y'&&input[a]!='1'&&input[a]!='8'){
					mirrored=false;
				}
			}
		}
		
		if(palindrome==false&&mirrored==false){
			cout<<input<<" -- is not a palindrome."<<endl<<endl;
		}
		else if(palindrome==true&&mirrored==false){
			cout<<input<<" -- is a regular palindrome."<<endl<<endl;
		}
		else if(palindrome==false&&mirrored==true){
			cout<<input<<" -- is a mirrored string."<<endl<<endl;
		}
		else{
			cout<<input<<" -- is a mirrored palindrome."<<endl<<endl;
		}
	}
	return 0;
}
