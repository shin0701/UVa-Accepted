//UVa 10921

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	int number[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	while(cin>>input){
		for(int a=0;a<input.length();a++){
			if(input[a]>='A'&&input[a]<='Z'){
				cout<<number[(int)input[a]-65];
			}
			else{
				cout<<input[a];
			}
		}
		cout<<endl;
	}
	return 0;
}
