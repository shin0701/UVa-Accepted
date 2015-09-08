//UVa 10107

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int input, count=0, number[11000]={0};
	
	while(cin>>input){
		number[count]=input;
		
		sort(number, number+count+1);
		
		if(count%2!=0){
			cout<<(number[(count+1)/2]+number[(count+1)/2-1])/2<<endl;
		}
		else{
			cout<<number[count/2]<<endl;
		}
		
		count++;
	}
	return 0;
}
