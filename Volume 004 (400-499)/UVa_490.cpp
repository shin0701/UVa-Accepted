//UVa 490

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input;
	string data[110][110];
	int size=0, maxLength=0;
	
	while(getline(cin, input)){
		for(int i=0;i<input.length();i++){
			data[size][i]=input[i];
		}
		
		if(input.length()>maxLength){
			maxLength=input.length();
		}
		
		size++;
	}
	
	for(int j=0;j<maxLength;j++){
		for(int k=size-1;k>=0;k--){
			if(data[k][j]==""){
				cout<<" ";
			}
			else{
				cout<<data[k][j];
			}
		}
		cout<<endl;
	}
    
	return 0;
}
