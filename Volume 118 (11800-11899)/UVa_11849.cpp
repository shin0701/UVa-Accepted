//UVa 11849

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	while(cin>>N>>M){
		if(N==0&&M==0){
			break;
		}
		
		int input, count[2000010]={0}, same=0;
		
		for(int a=0;a<N+M;a++){
			cin>>input;
			count[input]++;
		}
		for(int b=0;b<2000010;b++){
			if(count[b]>=2){
				same++;
			}
		}
		
		cout<<same<<endl;
	}
	return 0;
}
