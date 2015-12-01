//UVa 10137

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		
		double input[n]={0}, total=0;
		for(int a=0;a<n;a++){
			cin>>input[a];
			total+=input[a];
		}
		
		double avg=roundf(total/(double)n*100)/(double)100;
		
		double sum1=0, sum2=0;
		for(int b=0;b<n;b++){
			if(input[b]>avg){
				sum1+=input[b]-avg;
			}
			else{
				sum2+=avg-input[b];
			}
		}
		
		if(sum1<sum2){
			cout<<"$"<<fixed<<setprecision(2)<<sum1<<endl;
		}
		else{
			cout<<"$"<<fixed<<setprecision(2)<<sum2<<endl;
		}
	}
	return 0;
}