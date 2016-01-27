//UVa 10703

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int W, H, N;
	while(cin>>W>>H>>N){
		if(W==0&&H==0&&N==0){
			break;
		}
		
		int record[W][H];
		memset(record, 0, sizeof(record)); 
		
		for(int a=0;a<N;a++){
			int x1, y1, x2, y2;
			cin>>x1>>y1>>x2>>y2;
			
			int tmp;
			if(x1>x2){
				swap(x1, x2);
			}
			if(y1>y2){
				swap(y1, y2);
			}
			
			if(x1<1){
				x1=1;
			}
			if(y1<1){
				y1=1;
			}
			
			for(int b=x1-1;b<x2;b++){
				for(int c=y1-1;c<y2;c++){
					record[b][c]=1;
				}
			}
		}
		
		int count=0;
		for(int d=0;d<W;d++){
			for(int e=0;e<H;e++){
				if(record[d][e]==0){
					count++;
				}
			}
		}
		
		if(count==0){
			cout<<"There is no empty spots."<<endl;
		}
		else if(count==1){
			cout<<"There is one empty spot."<<endl;
		}
		else{
			cout<<"There are "<<count<<" empty spots."<<endl;
		}

	}
	return 0;
}
