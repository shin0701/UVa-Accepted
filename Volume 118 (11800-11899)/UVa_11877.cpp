//UVa 11877

#include <iostream>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		if(N==0){
			break;
		}
		
		if(N%2==0){
			cout<<N/2<<endl;
		}
		else{
			cout<<1+(N-3)/2<<endl;
		}
	}
	return 0;
}
