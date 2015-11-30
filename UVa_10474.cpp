//UVa 10474

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, Q, caseCount=1;
	while(cin>>N>>Q){
		if(N==0&&Q==0){
			break;
		}
		
		cout<<"CASE# "<<caseCount<<":"<<endl;
		
		int inputN[N]={0}, inputQ;
		for(int a=0;a<N;a++){
			cin>>inputN[a];
		}
		sort(inputN, inputN+N);
		
		for(int b=0;b<Q;b++){
			cin>>inputQ;
			int position=distance(inputN, find(inputN, inputN+N, inputQ))+1;
			
			if(position<=N){
				cout<<inputQ<<" found at "<<position<<endl;
			}
			else{
				cout<<inputQ<<" not found"<<endl;
			}
		}
		
		caseCount++;
	}
	return 0;
}
