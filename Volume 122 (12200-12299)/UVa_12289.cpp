//UVa 12289

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		for(int a=0;a<n;a++){
			string input;
			cin>>input;
			
			if(input.length()==5){
				cout<<"3"<<endl;
			}
			else{
				int count1=0, count2=0;
				//one
				if(input[0]=='o'){
					count1++;
				}
				if(input[1]=='n'){
					count1++;
				}
				if(input[2]=='e'){
					count1++;
				}
				//two
				if(input[0]=='t'){
					count2++;
				}
				if(input[1]=='w'){
					count2++;
				}
				if(input[2]=='o'){
					count2++;
				}
				
				if(count1>count2){
					cout<<"1"<<endl;
				}
				else{
					cout<<"2"<<endl;
				}
			}
		}
	}
	return 0;
}
