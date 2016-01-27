//Uva 12015

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N=0;
	while(cin>>N){
		for(int a=0;a<N;a++){
			string URL[10];
			int rate[10], maxRate=0;
			for(int b=0;b<10;b++){
				cin>>URL[b]>>rate[b];
				if(rate[b]>maxRate){
					maxRate=rate[b];
				}
			}
			
			cout<<"Case #"<<a+1<<":"<<endl;
			for(int c=0;c<10;c++){
				if(rate[c]==maxRate){
					cout<<URL[c]<<endl;
				}
			}
			
		}
	}
	return 0;
}
