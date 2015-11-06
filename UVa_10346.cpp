//UVa 10346

#include <iostream>
using namespace std;

int total(int n, int k){
	if(n/k>0){
		return n/k+total(n/k+n%k, k);
	}
	else{
		return 0;
	}
}

int main() {
	int n, k;
	while(cin>>n>>k){
		cout<<n+total(n, k)<<endl;
	}
	return 0;
}
