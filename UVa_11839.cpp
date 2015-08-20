//UVa 11839

#include <iostream>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		if(N==0){
			break;
		}
		
		for(int a=0;a<N;a++){
			int ans[5]={0}, black=0, white=0, blackIndex=0;
			for(int b=0; b<5;b++){
				cin>>ans[b];
				if(ans[b]<=127){
					black++;
					blackIndex=b;
				}
				else{
					white++;
				}
			}
			
			if(black==1){
				cout<<(char)(blackIndex+65)<<endl;
			}
			else{
				cout<<"*"<<endl;
			}
		}
	}
	return 0;
}
