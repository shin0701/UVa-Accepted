//UVa 12157

#include <iostream>
using namespace std;

// Mile: 30s $10
// Juice: 60s $15

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			int N;
			cin>>N;
			
			int Mile=0, Juice=0;
			for(int b=0;b<N;b++){
				int time;
				cin>>time;
				
				Mile+=(time/30+1)*10;
				Juice+=(time/60+1)*15;
			}
			
			if(Mile<Juice){
				cout<<"Case "<<a+1<<": Mile "<<Mile<<endl;
			}
			else if(Mile>Juice){
				cout<<"Case "<<a+1<<": Juice "<<Juice<<endl;
			}
			else if(Mile==Juice){
				cout<<"Case "<<a+1<<": Mile Juice "<<Mile<<endl;
			}
		}
	}
	return 0;
}