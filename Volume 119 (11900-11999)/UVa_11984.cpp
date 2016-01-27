//UVa 11984

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			float C, d;
			cin>>C>>d;
			
			float tmpF=(C/5*9)+32;
			float tmpC=(tmpF+d-32)/9*5;
			
			cout<<"Case "<<a+1<<": "<<fixed<<setprecision(2)<<tmpC<<endl;
		}
	}
	return 0;
}
