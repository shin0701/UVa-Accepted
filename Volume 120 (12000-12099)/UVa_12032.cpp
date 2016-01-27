//UVa 12032

#include <iostream>
using namespace std;

int main() {
	int T=0;
	while(cin>>T){
		for(int a=0;a<T;a++){
			int N=0;
			cin>>N;
			
			int ladders[N+1]={0};
			for(int b=1;b<N+1;b++){
				cin>>ladders[b];
			}
			
			int k=0;
			for(int c=1;c<N+1;c++){
				if(ladders[c]-ladders[c-1]>k){
					k=ladders[c]-ladders[c-1];
				}
			}
			
			int check=k;
			for(int d=1;d<N+1;d++){
				if(ladders[d]-ladders[d-1]==check){
					check--;
				}
				else if(ladders[d]-ladders[d-1]>check){
					check=-1;
				}
			}
			if(check<0){
				k++;
			}
			
			cout<<"Case "<<a+1<<": "<<k<<endl;
		}
	}
	return 0;
}
