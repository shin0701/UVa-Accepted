//UVa 11455

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		int L[4];
		for(int a=0;a<input;a++){
			cin>>L[0]>>L[1]>>L[2]>>L[3];
			sort(L,L+4);
			
			
			//square: 正方形
			if(L[1]==L[2]&&L[2]==L[3]&&L[3]==L[0]&&L[1]!=0){
				cout<<"square"<<endl;
			}
			//rectangle: 長方形
			else if(L[0]==L[1]&&L[2]==L[3]&&&L[0]!=0&L[2]!=0){
				cout<<"rectangle"<<endl;
			}
			//quadrangle: 四邊形
			else if(L[3]<L[0]+L[1]+L[2]){
				cout<<"quadrangle"<<endl;
			}
			//banana: 都不是
			else{
				cout<<"banana"<<endl;
			}
		}
		
	}
	return 0;
}
