//UVa 10591

#include <iostream>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		for(int a=0;a<N;a++){
			int number;
			cin>>number;
			
			int count=number;
			int record[1000]={0};
			while(count!=1){
				int tmp=0;
				while(count>0){
					tmp+=(count%10)*(count%10);
					count/=10;
				}
				count=tmp;
				
				if(count==number||record[count]!=0){
					break;
				}
				else{
					record[count]=1;
				}
			}
			
			if(count==1){
				cout<<"Case #"<<a+1<<": "<<number<<" is a Happy number."<<endl;
			}
			else{
				cout<<"Case #"<<a+1<<": "<<number<<" is an Unhappy number."<<endl;
			}
		}
	}
	return 0;
}
