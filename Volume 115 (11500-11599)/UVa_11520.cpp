//UVa 11520

#include <iostream>
using namespace std;

int main() {
	int input=0;
	cin>>input;
	
	for(int a=0;a<input;a++){
		int size=0;
		cin>>size;
		
		char data[size][size];
		for(int b=0;b<size;b++){
			for(int c=0;c<size;c++){
				cin>>data[b][c];
			}
		}
		
		cout<<"Case "<<a+1<<":"<<endl;
		
		for(int d=0;d<size;d++){
			for(int e=0;e<size;e++){
				if(data[d][e]=='.'){
					char draw='A';
					while(draw<'Z'){
						bool up=(d==0||data[d-1][e]!=draw)?true:false;
						bool down=(d==size-1||data[d+1][e]!=draw)?true:false;
						bool left=(e==0||data[d][e-1]!=draw)?true:false;
						bool right=(e==size-1||data[d][e+1]!=draw)?true:false;
						
						if(up==true&&down==true&&left==true&&right==true){
							data[d][e]=draw;
							break;
						}
						else{
							draw++;
						}
					}
				}
				cout<<data[d][e];
			}
			cout<<endl;
		}
	}
	return 0;
}
