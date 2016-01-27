//UVa 11875

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			int N;
			cin>>N;
			
			int ages[N]={0};
			for(int b=0;b<N;b++){
				cin>>ages[b];
			}
			sort(ages, ages+N);
			
			cout<<"Case "<<a+1<<": "<<ages[N/2]<<endl;
		}
	}
	return 0;
}
