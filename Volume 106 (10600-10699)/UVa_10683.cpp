//UVa 10683

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
	// HHMMSSCC
	string input;
	while(cin>>input){
		int HH=stoi(input.substr(0,2));
		int MM=stoi(input.substr(2,2));
		int SS=stoi(input.substr(4,2));
		int CC=stoi(input.substr(6,2));
		
		int times=HH*60*60*100+MM*60*100+SS*100+CC;
		
		// cout<<times<<endl;
		// cout<<fixed<<setprecision(0)<<setw(7)<<setfill('0')<<times*125.0/108<<endl;
		cout<<setw(7)<<setfill('0')<<times*125/108<<endl;
		
	}
	return 0;
}
