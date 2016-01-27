//UVa 11044

#include <iostream>
using namespace std;
 
int main() {
	int t;
	while(cin>>t){
		for(int a=0;a<t;a++){
			int n, m;
			cin>>n>>m;
 
			n-=2;
			m-=2;
 
			int totalN=(n%3==0)?n/3:n/3+1;
			int totalM=(m%3==0)?m/3:m/3+1;
 
			cout<<totalN*totalM<<endl;
		}
	}
	return 0;
}
