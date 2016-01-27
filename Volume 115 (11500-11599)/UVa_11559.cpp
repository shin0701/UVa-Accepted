//UVa 11559

#include <iostream>
using namespace std;

int main() {
	int N, B, H, W;
	while(cin>>N>>B>>H>>W){
		int minCost=10000;
		bool haveRoom=false;
		
		for(int b=0;b<H;b++){
			int p, a;
			cin>>p;
			for(int c=0;c<W;c++){
				cin>>a;
				if(a>=N&&p<minCost){
					minCost=p;
					haveRoom=true;
				}
			}
		}
		
		if(haveRoom&&minCost*N<=B){
			cout<<minCost*N<<endl;
		}
		else{
			cout<<"stay home"<<endl;
		}
	}
	return 0;
}
