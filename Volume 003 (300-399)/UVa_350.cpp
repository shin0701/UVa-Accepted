//UVa 350

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	int Z, I, M, L, caseCount=1;
	
	while(cin>>Z>>I>>M>>L){
		if(Z==0&&I==0&&M==0&&L==0){
			break;
		}
		
		int number=(Z*L+I)%M;
		int count=1;
		int record[15000]={0};
		
		while(record[number]==0){
			record[number]=count;
			count++;
			number=(Z*number+I)%M;
		}
		
		cout<<"Case "<<caseCount<<": "<<count-record[number]<<endl;
		caseCount++;
	}
	return 0;
}
