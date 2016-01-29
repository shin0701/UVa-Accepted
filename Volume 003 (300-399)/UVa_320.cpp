//UVa 320

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		for(int a=0;a<n;a++){
			int x, y;
			cin>>x>>y;
			
			char bitmap[32][32];
			memset(bitmap, '.', sizeof(bitmap));
			
			string move;
			cin>>move;
			
			for(int d=0;d<move.length();d++){
				if(move[d]=='N'){
					y++;
					bitmap[y-1][x]='X';
				}
				else if(move[d]=='E'){
					x++;
					bitmap[y-1][x-1]='X';
				}
				else if(move[d]=='W'){
					x--;
					bitmap[y][x]='X';
				}
				else if(move[d]=='S'){
					y--;
					bitmap[y][x-1]='X';
				}
				else if(move[d]=='.'){
					break;
				}
			}
			
			cout<<"Bitmap #"<<a+1<<endl;
			for(int b=31;b>=0;b--){
				for(int c=0;c<32;c++){
					cout<<bitmap[b][c];
				}
				cout<<endl;
			}
			cout<<endl;
		}
	}
	return 0;
}
