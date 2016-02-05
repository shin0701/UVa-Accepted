//UVa 11687

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	while(cin>>input){
		if(input=="END"){
			break;
		}
		
		int digit=input.length(), count=1, digit1=0;
		
		if(input!="1"){
			while(true){
				string tmp=to_string(digit);
				digit1=tmp.length();
				
				count++;
				if(digit1!=digit){
					digit=digit1;
				}
				else{
					break;
				}
			}
		}
		
		cout<<count<<endl;
		
	}
	return 0;
}
