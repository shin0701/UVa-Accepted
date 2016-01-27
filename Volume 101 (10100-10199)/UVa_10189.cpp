//UVa 10189

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n1, n2,count=1;
	while(cin>>n1>>n2){
		if(n1==0&&n2==0){
			break;
		}
		if(count>1){
			cout<<endl;
		}
		
		char data[n1][n2];
		for(int a=0;a<n1;a++){
			for(int b=0;b<n2;b++){
				cin>>data[a][b];
				if(data[a][b]=='.'){
					data[a][b]='0';
				}
			}
		}
		
		for(int c=0;c<n1;c++){
			for(int d=0;d<n2;d++){
				if(data[c][d]=='*'){
					//左上
					if(c>0&&d>0)	data[c-1][d-1]!='*'?data[c-1][d-1]++:data[c-1][d-1]='*';
					//上
					if(c>0)			data[c-1][d]!='*'?data[c-1][d]++:data[c-1][d]='*';
					//右上
					if(c>0&&d<n2-1)	data[c-1][d+1]!='*'?data[c-1][d+1]++:data[c-1][d+1]='*';
					//左
					if(d>0)			data[c][d-1]!='*'?data[c][d-1]++:data[c][d-1]='*';
					//右
					if(d<n2-1)		data[c][d+1]!='*'?data[c][d+1]++:data[c][d+1]='*';
					//左下
					if(c<n1-1&&d>0)	data[c+1][d-1]!='*'?data[c+1][d-1]++:data[c+1][d-1]='*';
					//下
					if(c<n1-1)		data[c+1][d]!='*'?data[c+1][d]++:data[c+1][d]='*';
					//右下
					if(c<n1-1&&d<n2-1)	data[c+1][d+1]!='*'?data[c+1][d+1]++:data[c+1][d+1]='*';
				}
			}
		}
		
		cout<<"Field #"<<count<<":"<<endl;
		count++;
		
		for(int e=0;e<n1;e++){
			for(int f=0;f<n2;f++){
				cout<<data[e][f];
			}
			cout<<endl;
		}
	}
	return 0;
}
