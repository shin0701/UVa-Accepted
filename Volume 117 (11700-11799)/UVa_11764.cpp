//UVa 11764

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		for(int a=0;a<input;a++){
			int N;
			cin>>N;
			
			int walls[N]={0};
			int up=0, down=0;
			for(int b=0;b<N;b++){
				cin>>walls[b];
				if(b>0){
					if(walls[b]>walls[b-1]){
						up++;
					}
					if(walls[b]<walls[b-1]){
						down++;
					}
				}
			}
			
			cout<<"Case "<<a+1<<": "<<up<<" "<<down<<endl;
		}
	}
	return 0;
}
