//UVa 11207

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		if(input!=0){
			float w=0, h=0, val=0, index=0;
			for(int a=0;a<input;a++){
				cin>>w>>h;
				
				float minL=min(w, h);
				float maxL=max(w, h);
				float L=max(min(minL, maxL/4), min(minL/2, maxL/2));
				
				if(L>val){
					val=L;
					index=a+1;
				}
			}
			cout<<index<<endl;
		}
		else{
			return 0;
		}
	}
	return 0;
}
