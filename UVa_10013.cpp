//UVa 10013

#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		for(int a=0;a<n;a++){
			int m;
			cin>>m;
			
			int number1[m]={0}, number2[m]={0};
			for(int b=0;b<m;b++){
				scanf ("%d %d", &number1[b], &number2[b]);
				
				number1[b]+=number2[b];
			}
			
			for(int c=m-1;c>=0;c--){
				if(number1[c]>=10&&c>0){
					number1[c-1]++;
					number1[c]-=10;
				}
			}
			
			if(a>0){
				cout<<endl;
			}
			for(int d=0;d<m;d++){
				cout<<number1[d];
			}
			cout<<endl;
		}
	}
	return 0;
}
