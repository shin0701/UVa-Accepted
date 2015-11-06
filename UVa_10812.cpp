//UVa 10812

#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		for(int a=0;a<n;a++){
			long long int s=0, d=0;
			long long int score1=0, score2=0;
			cin>>s>>d;
		
			if((s+d)%2!=0||s-(s+d)/2<0){
				cout<<"impossible"<<endl;
			}
			else{
				score1=(s+d)/2;
				score2=s-score1;
			
				cout<<score1<<" "<<score2<<endl;
			}
		}
	}
	return 0;
}
