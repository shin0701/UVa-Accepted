//UVa 11991

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	while(cin>>n>>m){
		vector<vector<int>> number;
		number.assign(1000000, vector<int>());
		
		int input;
		for(int a=0;a<n;a++){
			cin>>input;
			number[input].push_back(a+1);
		}
		
		for(int b=0;b<m;b++){
			int k, v;
			cin>>k>>v;
			
			if(k<=number[v].size()){
				cout<<number[v][k-1]<<endl;
			}
			else{
				cout<<"0"<<endl;
			}
		}
	}
	return 0;
}
