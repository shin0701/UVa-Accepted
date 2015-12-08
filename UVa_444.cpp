//UVa 444

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string input;
	while(getline(cin, input)){
		string type=((int)input[0]>=48&&(int)input[0]<=57)?"decode":"encode";
		
		//decode
		if(type=="decode"){
			reverse(input.begin(), input.end());
			
			string decode="";
			while(input!=""){
				int alphabet=0;
				if(input[0]!='1'){
					alphabet=stoi(input.substr(0,2));
					input=input.substr(2);
				}
				else{
					alphabet=stoi(input.substr(0,3));
					input=input.substr(3);
				}
				decode+=(char)alphabet;
			}
			cout<<decode;
		}
		//encode
		else{
			string encode="";
			for(int a=0;a<input.length();a++){
				encode+=to_string((int)input[a]);
			}
			for(int b=encode.length()-1;b>=0;b--){
				cout<<encode[b];
			}
		}
		cout<<endl;
	}
	return 0;
}
