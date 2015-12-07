//UVa 846

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			int x, y;
			cin>>x>>y;
			
			int length=abs(x-y), step=0, count=0;
			
			while(length>step){
				step+=count/2+1;
				count++;
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
