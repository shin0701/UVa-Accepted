//UVa 11547

// (((n*567/9)+7492)*235/47)-498
// -> (((n*63)+7492)*5)-498

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
 
int main() {
	int input;
	while(cin>>input){
		for(int a=0;a<input;a++){
			int n, result=0;
			cin>>n;
			
			result=(((n*63)+7492)*5)-498;
			cout<<abs((result%100)/10)<<endl;
		}
	}
	return 0;
}
