//UVa 541

#include <iostream>
using namespace std;

int main() {
	int n=0;
	while(cin>>n){
		if(n==0){
			break;
		}
		
		int matrix[n][n], changeX=0, changeY=0, count=0;
		bool checkR=true, checkC=true, corrupt=false;
		
		//計算列
		for(int a=0;a<n;a++){
			for(int b=0;b<n;b++){
				cin>>matrix[a][b];
				count+=matrix[a][b];
			}
			if(count%2!=0){
				if(checkR==false){
					corrupt=true;
				}
				checkR=false;
				changeX=a;
			}
			count=0;
		}
		
		//計算行
		for(int c=0;c<n;c++){
			for(int d=0;d<n;d++){
				count+=matrix[d][c];
			}
			if(count%2!=0){
				if(checkC==false){
					corrupt=true;
				}
				checkC=false;
				changeY=c;
			}
			count=0;
		}
		
		if(corrupt==true){
			cout<<"Corrupt"<<endl;
		}
		else if(checkR==false&&checkC==false){
			cout<<"Change bit ("<<changeX+1<<","<<changeY+1<<")"<<endl;
		}
		else{
			cout<<"OK"<<endl;
		}
		
	}
	return 0;
}
