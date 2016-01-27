//UVa 10550

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, N1, N2, N3;
	while(cin>>N>>N1>>N2>>N3){
		if(N==0&&N1==0&&N2==0&&N3==0){
			break;
		}
		
		int degree=720; // turn 2 full turns 
		
		// stop at the first number
		if(N!=N1){
			if(N1>N){
				degree+=(40-(N1-N))*9;
			}
			else{
				degree+=(N-N1)*9;
			}
		}
		
		degree+=360; // turn counter-clockwise 1 full turn
		
		// turn counter-clockwise until the 2nd number is reached
		if(N1!=N2){
			if(N1>N2){
				degree+=(40-(N1-N2))*9;
			}
			else{
				degree+=(N2-N1)*9;
			}
		}
		
		// turn clockwise until the 3rd number is reached
		if(N2!=N3){
			if(N3>N2){
				degree+=(40-(N3-N2))*9;
			}
			else{
				degree+=(N2-N3)*9;
			}
		}
		
		cout<<degree<<endl;
	}
	return 0;
}
