//UVa 10302

#include <iostream>
using namespace std;

int main() {
	long long int x;
	while(cin>>x){
		cout<<fixed<<x*x*(x+1)*(x+1)/4<<endl;
	}
	return 0;
}
