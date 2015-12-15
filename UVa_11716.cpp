//UVa 11716

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<=T;a++){
			string input;
			getline(cin, input);
			if(a>0){
				double length=sqrt(input.length());
				int size=(int)length;
				if(length!=size){
					cout<<"INVALID"<<endl;
				}
				else{
					char result[size][size];
					for(int b=0;b<input.length();b++){
						result[b/size][b%size]=input[b];
					}
					
					for(int c=0;c<size;c++){
						for(int d=0;d<size;d++){
							cout<<result[d][c];
						}
					}
					cout<<endl;
				}
			}
		}
	}
	return 0;
}
