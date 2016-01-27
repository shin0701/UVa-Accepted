//UVa 11743

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		for(int a=0;a<input;a++){
			int data[4]={0}, credit[16]={0};
			for(int b=0;b<4;b++){
				cin>>data[b];
				credit[4*b]=data[b]/1000;
				credit[4*b+1]=data[b]/100%10;
				credit[4*b+2]=data[b]/10%10;
				credit[4*b+3]=data[b]%10;
			}
			
			int number1=0, number2=0;
			
			for(int c=0;c<16;c++){
				if(c%2==0){
					number1+=(credit[c]*2/10)+(credit[c]*2%10);
				}
				else{
					number2+=credit[c];
				}
			}
			
			if((number1+number2)%10!=0){
				cout<<"Invalid"<<endl;
			}
			else{
				cout<<"Valid"<<endl;
			}
		}
	}
	return 0;
}
