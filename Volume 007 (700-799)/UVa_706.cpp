//UVa 706

//  -       -   -       -   -   -   -   - 
// | |   |   |   | | | |   |     | | | | |
// 		    -   -   -   -   -       -   - 
// | |   | |     |   |   | | |   | | |   |
//  -       -   -       -   -       -   - 

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	int s;
	string n;
	while(cin>>s>>n){
		if(s==0&&n=="0"){
			break;
		}
		
		int col=s+2;
		int row=2*s+3;
		
		string data[row];
		string led[row][col];
		
		for(int a=0;a<n.length();a++){
			//initial
			for(int d=0;d<row;d++){
				for(int e=0;e<col;e++){
					led[d][e]=' ';
				}
			}
			
			if(n[a]=='0'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
					led[row-1][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						led[c][0]='|';
						led[c][col-1]='|';
					}
				}
			}
			else if(n[a]=='1'){
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						led[c][col-1]='|';
					}
				}
			}
			else if(n[a]=='2'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
					led[row/2][b]='-';
					led[row-1][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						if(c<row/2){
							led[c][col-1]='|';
						}
						else{
							led[c][0]='|';
						}
					}
				}
			}
			else if(n[a]=='3'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
					led[row/2][b]='-';
					led[row-1][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						led[c][col-1]='|';
					}
				}
			}
			else if(n[a]=='4'){
				for(int b=1;b<col-1;b++){
					led[row/2][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						if(c<row/2){
							led[c][0]='|';
						}
						led[c][col-1]='|';
					}
				}
			}
			else if(n[a]=='5'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
					led[row/2][b]='-';
					led[row-1][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						if(c<row/2){
							led[c][0]='|';
						}
						else{
							led[c][col-1]='|';
						}
					}
				}
			}
			else if(n[a]=='6'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
					led[row/2][b]='-';
					led[row-1][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						if(c>row/2){
							led[c][col-1]='|';
						}
						led[c][0]='|';
					}
				}
			}
			else if(n[a]=='7'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						led[c][col-1]='|';
					}
				}
			}
			else if(n[a]=='8'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
					led[row/2][b]='-';
					led[row-1][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						led[c][0]='|';
						led[c][col-1]='|';
					}
				}
			}
			else if(n[a]=='9'){
				for(int b=1;b<col-1;b++){
					led[0][b]='-';
					led[row/2][b]='-';
					led[row-1][b]='-';
				}
				for(int c=1;c<row-1;c++){
					if(c!=row/2){
						if(c<row/2){
							led[c][0]='|';
						}
						led[c][col-1]='|';
					}
				}
			}
			
			
			
			for(int d=0;d<row;d++){
				for(int e=0;e<col;e++){
					data[d].append(led[d][e]);
				}
				if(a!=n.length()-1){
					data[d].append(" ");
				}
			}
		}
		
		for(int i=0;i<row;i++){
				cout<<data[i]<<endl;
		}
		cout<<endl;
	}
	return 0;
}
