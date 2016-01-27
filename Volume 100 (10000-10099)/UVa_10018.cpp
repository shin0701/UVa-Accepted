//UVa 10018

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		for(int a=0;a<N;a++){
			long long int input;
			int count=0;
			cin>>input;
			
			while(true){
				//檢查是否為回文
				long long int checkN=input, number[15]={0};
				int length=0;
				while(checkN!=0){
					number[length]=checkN%10;
					checkN=checkN/10;
					length++;
				}
				bool check=true;
				for(int b=0;b<length;b++){
					if(number[b]!=number[length-1-b]){
						check=false;
						break;
					}
				}
				
				if(check==false||count==0){
					for(int c=0;c<length;c++){
						input+=number[c]*pow(10, length-1-c);
					}
					count++;
				}
				else{
					cout<<count<<" "<<input<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
