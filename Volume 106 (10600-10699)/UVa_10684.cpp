//UVa 10684

#include <iostream>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		if(N==0){
			break;
		}
		
		int money[N]={0}, record[N]={0}, count=0;
		for(int a=0;a<N;a++){
			cin>>money[a];
			
			if(count+money[a]>=0){
				count+=money[a];
				record[a]=count;
			}
			else{
				record[a]=count;
				count=0;
			}
		}
		
		int max=0;
		for(int b=0;b<N;b++){
			if(record[b]>max){
				max=record[b];
			}
		}
		
		if(max<=0){
			cout<<"Losing streak."<<endl;
		}
		else{
			cout<<"The maximum winning streak is "<<max<<"."<<endl;
		}
	}
	return 0;
}
