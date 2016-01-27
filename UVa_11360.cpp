//UVa 11360

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			int N;
			cin>>N;
			
			long long int matrix[N][N], tmp;
			memset(matrix, 0, sizeof(matrix)); 
			
			for(int b=0;b<N;b++){
				cin>>tmp;
				for(int c=N-1;c>=0;c--){
					matrix[b][c]=tmp%10;
					tmp/=10;
				}
			}
			
			int M, num1, num2;
			cin>>M;
			
			bool transposed=false;
			
			for(int d=0;d<M;d++){
				string operation;
				cin>>operation;
				
				if(operation=="row"){
					cin>>num1>>num2;
					
					for(int e=0;e<N;e++){
						swap(matrix[num1-1][e], matrix[num2-1][e]);
					}
				}
				else if(operation=="col"){
					cin>>num1>>num2;
					
					for(int f=0;f<N;f++){
						swap(matrix[f][num1-1], matrix[f][num2-1]);
					}
				}
				else if(operation=="inc"){
					for(int g=0;g<N;g++){
						for(int h=0;h<N;h++){
							matrix[g][h]=(matrix[g][h]+1)%10;
						}
					}
				}
				else if(operation=="dec"){
					for(int i=0;i<N;i++){
						for(int j=0;j<N;j++){
							matrix[i][j]=(matrix[i][j]-1)%10;
							
							if(matrix[i][j]==-1){
								matrix[i][j]=9;
							}
						}
					}
				}
				else if(operation=="transpose"){
					for(int k=0;k<N;k++){
						for(int l=k;l<N;l++){
							swap(matrix[k][l], matrix[l][k]);
						}
					}
				}
			}
			
			cout<<"Case #"<<a+1<<endl;
			for(int m=0;m<N;m++){
				for(int n=0;n<N;n++){
					cout<<matrix[m][n];
				}
				cout<<endl;
			}
			cout<<endl;
		}
	}
	return 0;
}
