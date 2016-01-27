//UVa 1645

#include <iostream>
using namespace std;

int main() {
	int data[1000]={0};
	data[1]=1;
	for(int i=2;i<=1000;i++){
		for(int j=1;j<i;j++){
			if((i-1)%j==0){
				data[i]+=data[j];
				data[i]%=1000000007;
			}
		}
	}
	
	int input, caseNumber=1;
	while(cin>>input){
		cout<<"Case "<<caseNumber<<": "<<data[input]<<endl;
		caseNumber++;
	}

	return 0;
}
