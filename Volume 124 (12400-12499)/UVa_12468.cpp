//UVa 12468

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	while(cin>>a>>b){
		if(a<0&&b<0){
			break;
		}
		
		int count1=abs(a-b);
		int count2=min(a,b)+100-max(a,b);
		
		cout<<min(count1, count2)<<endl;
	}
	return 0;
}
