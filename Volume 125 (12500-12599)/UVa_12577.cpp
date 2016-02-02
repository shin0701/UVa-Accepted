//UVa 12577

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int count=1;
	string input;
	while(cin>>input){
		if(input=="*"){
			count=1;
			break;
		}
		
		if(input=="Hajj"){
			cout<<"Case "<<count<<": Hajj-e-Akbar"<<endl;
		}
		else if(input=="Umrah"){
			cout<<"Case "<<count<<": Hajj-e-Asghar"<<endl;
		}
		count++;
	}
	return 0;
}
