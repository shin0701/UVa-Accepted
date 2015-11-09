//UVa 11636

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	int N, caseCount=1;
	
	while(cin>>N){
		if(N<0){
			break;
		}
		
		int result=0;
		int number=1;
		
		while(number<N){
			if(number*2<N){
				number*=2;
				result++;
			}
			else{
				result++;
				break;
			}
		}
		
		
		cout<<"Case "<<caseCount<<": "<<result<<endl;
		caseCount++;
	}
	return 0;
}
