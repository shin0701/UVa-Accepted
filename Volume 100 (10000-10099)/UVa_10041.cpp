//UVa 10041

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		for(int a=0;a<n;a++){
			int r;
			cin>>r;
			
			int s[r]={0};
			for(int b=0;b<r;b++){
				cin>>s[b];
			}
			
			sort(s, s+r);
			
			int vito=s[r/2];
			long long int total=0;
			for(int c=0;c<r;c++){
				total+=abs(s[c]-vito);
			}
			cout<<total<<endl;
		}
	}
	return 0;
}
