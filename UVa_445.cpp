//UVa 445

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	while(getline(cin, input)){
		if(input==" "){
			cout<<endl;
		}
		else{
			int count=0;
			for(int a=0;a<input.length();a++){
				if(input[a]>='0'&&input[a]<='9'){
					count+=(int)input[a]-(int)'0';
				}
				else{
					if(input[a]=='!'){
						cout<<endl;
					}
					else if(input[a]=='b'){
						for(int b=0;b<count;b++){
							cout<<" ";
						}
						count=0;
					}
					else{
						for(int c=0;c<count;c++){
							cout<<input[a];
						}
						count=0;
					}
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
