//UVa 10300

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		for(int a=0;a<n;a++){
			int f;
			cin>>f;
			
			long long int data[f][3];
			long long int sum=0;
			for(int b=0;b<f;b++){
				cin>>data[b][0]>>data[b][1]>>data[b][2];
				sum+=data[b][0]*data[b][2];
			}
			
			cout<<sum<<endl;
		}
	}
	return 0;
}
