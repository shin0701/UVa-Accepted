//UVa 11479

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int number;
	while(cin>>number){
		for(int i=0;i<number;i++){
			long long int a,b,c;
			cin>>a>>b>>c;
			
			//Invalid: 無法形成三角形
			if(a+b<=c||a+c<=b||b+c<=a||abs(a-b)>=c||abs(a-c)>=b||abs(b-c)>=a){
				cout<<"Case "<<i+1<<": Invalid"<<endl;
			}
			else{
				//Equilateral: 三邊均等長
				if(a==b&&a==c&&b==c){
					cout<<"Case "<<i+1<<": Equilateral"<<endl;
				}
				//Isosceles: 恰有兩邊等長
				else if((a==b)||(a==c)||(b==c)){
					cout<<"Case "<<i+1<<": Isosceles"<<endl;
				}
				//Scalene: 三邊均不等長
				else{
					cout<<"Case "<<i+1<<": Scalene"<<endl;
				}
			}
		}
	}
	return 0;
}
