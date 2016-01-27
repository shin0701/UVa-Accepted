//UVa 12279

#include <iostream>
using namespace std;

int main() {
	int N, caseCount=1;
	while(cin>>N){
		if(N==0){
			break;
		}
		
		int number, count1=0, count2=0;
		for(int a=0;a<N;a++){
			cin>>number;
			
			if(number==0){
				count2++;
			}
			else{
				count1++;
			}
		}
		
		cout<<"Case "<<caseCount<<": "<<count1-count2<<endl;
		
		caseCount++;
	}
	return 0;
}
