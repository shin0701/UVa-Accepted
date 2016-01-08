//UVa 11364

#include <iostream>
using namespace std;

int main() {
	int t;
	
	while(cin>>t){
		int n;
		for(int a=0;a<t;a++){
			cin>>n;
			
			int number, max=0, min=200;
			for(int b=0;b<n;b++){
				cin>>number;
				
				if(number>max){
					max=number;
				}
				if(number<min){
					min=number;
				}
			}
			
			cout<<(max-min)*2<<endl;
		}
	}
	return 0;
}
