//UVa 105

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	int L, H, R;
	int height[10001]={0};
	int size=0;
	
	while(cin>>L>>H>>R){
		for(int i=L;i<R;i++){
			if(height[i]<H){
				height[i]=H;
			}
		}
		
		if(R>size){
			size=R;
		}
	}
	
	int value=height[1], count=0;
	cout<<1<<" ";
	for(int j=1;j<=size;j++){
		if(value!=height[j]||j==size){
			cout<<value<<" "<<j<<" ";
			value=height[j];
			count++;
		}
	}
	cout<<"0"<<endl;
	
	return 0;
}
