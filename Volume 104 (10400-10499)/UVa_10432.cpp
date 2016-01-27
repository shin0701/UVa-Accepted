//UVa 10432

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double r;
	int n;
	while(cin>>r>>n){
		cout<<fixed<<setprecision(3)<<(r*r*sin((2*M_PI)/n)*n/2)<<endl;
	}
	return 0;
}
