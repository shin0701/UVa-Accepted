//UVa 10035

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int input1, input2;
	while(cin>>input1>>input2){
		if(input1==0&&input2==0){
			break;
		}
		
		int count=0, carry=0;
		while(input1!=0||input2!=0){
			if((input1%10+input2%10+carry)>=10){
				count++;
				carry=1;
			}
			else{
				carry=0;
			}
			input1=input1/10;
			input2=input2/10;
		}
		
		if(count>1){
			cout<<count<<" carry operations."<<endl;
		}
		else if(count==1){
			cout<<count<<" carry operation."<<endl;
		}
		else{
			cout<<"No carry operation."<<endl;
		}
	}
	return 0;
}
