//UVa 11185

#include <iostream>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		if(input<0){
			break;
		}
		
		int number[1000]={0}, count=0;
		
		while(input>0){
			number[count]=input%3;
			input/=3;
			count++;
		}
		
		for(int a=count-1;a>=0;a--){
			cout<<number[a];
		}
		
		if(count==0){
			cout<<"0";
		}
		
		cout<<endl;
	}
	return 0;
}
