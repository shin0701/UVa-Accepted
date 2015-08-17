//UVa 11588

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	int input;
	while(cin>>input){
		for(int a=0; a<input; a++){
			int R, C;//圖檔長寬
			int M;//重要像素的大小
			int N;//不重要像素的大小
			cin>>R>>C>>M>>N;
			
			char data[R][C];
			int charCount[26]={0};
			for(int b=0; b<R; b++){
				for(int c=0; c<C; c++){
					cin>>data[b][c];
					charCount[(int)data[b][c]-65]++;
				}
			}
			
			int max=0, totalMax=0;
			for(int d=0; d<26; d++){
				if(charCount[d]>max){
					max=charCount[d];
				}
			}
			for(int e=0; e<26; e++){
				if(charCount[e]==max){
					totalMax+=max;
				}
			}
			cout<<"Case "<<a+1<<": "<<totalMax*M+(R*C-totalMax)*N<<endl;
		}
	}
	return 0;
}
