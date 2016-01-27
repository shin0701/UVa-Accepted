//UVa 10954

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		
		long long int number[n]={0};
		for(int a=0;a<n;a++){
			cin>>number[a];
		}
		
		sort(number, number+n);
		
		if(n>1){
			int cost[n-1]={0}, count=0;
		
			while(number[n-2]>0){
				for(int b=0;b<n;b++){
					if(number[b]>=0){
						number[b]+=number[b+1];
						number[b+1]=-1;
						cost[count]=number[b];
						break;
					}
				}
				
				sort(number, number+n);
				
				count++;
			}
			
			int totalCost=0;
			for(int c=0;c<n-1;c++){
				totalCost+=cost[c];
			}
			
			cout<<totalCost<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
