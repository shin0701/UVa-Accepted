//UVa 10473

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	while(cin>>input){
		if(stoi(input)<0){
			break;
		}
		
		if((int)input.find("0x")!=0){
			cout<<"0x"<<uppercase<<hex<<stoi(input)<<endl;
		}
		else{
			cout<<dec<<stoi(input,nullptr,0)<<endl;
		}
	}
	return 0;
}
