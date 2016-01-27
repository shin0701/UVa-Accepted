//UVa 11936

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;
	while(cin>>number){
		for(int i=0;i<number;i++){
			long long int a,b,c;
			cin>>a>>b>>c;
			
			if(a+b<=c||a+c<=b||b+c<=a||abs(a-b)>=c||abs(a-c)>=b||abs(b-c)>=a){
				cout<<"Wrong!!"<<endl;
			}
			else{
				cout<<"OK"<<endl;
			}
		}
	}
	return 0;
}
