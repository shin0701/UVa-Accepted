//UVa 10370

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int C;
	while(cin>>C){
		for(int b=0;b<C;b++){
			int N;
			cin>>N;
			
			int grade[N]={0};
			int total=0;
			for(int a=0;a<N;a++){
				cin>>grade[a];
				total+=grade[a];
			}
			
			double count=0, average=total/N;
			for(int c=0;c<N;c++){
				if(grade[c]>average){
					count++;
				}
			}
			
			// cout<<setw<<setprecision(3)<<(count/(double)N)*100<<"%"<<endl;
			cout<<fixed<<setprecision(3)<<(count/(double)N)*100<<"%"<<endl;
		}
	}
	return 0;
}
