//UVa 10970

#include <iostream>
using namespace std;

int main() {
	int M, N;
	while(cin>>M>>N){
		if(M>N){
			cout<<(M-1)+M*(N-1)<<endl;
		}
		else{
			cout<<(N-1)+N*(M-1)<<endl;
		}
	}
	return 0;
}
