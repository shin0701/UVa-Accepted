//UVa 10905

#include <iostream>
#include <cstring>
#include <algorithm> 
using namespace std;

int main() {
	int N;
	while(cin>>N){
		if(N==0){
			break;
		}
		
		string input[N];
		int maxLength=0;
		for(int a=0;a<N;a++){
			cin>>input[a];
			
			if(input[a].length()>maxLength){
				maxLength=input[a].length();
			}
		}
		
		sort(input, input+N);
		
		for(int b=0;b<N-1;b++){
			for(int c=b;c<N;c++){
				for(int d=0;d<max(input[b].length(),input[c].length());d++){
					if(input[c][d]==input[b][d]&&input[b]+input[c]>input[c]+input[b]){
						string tmp=input[c];
						input[c]=input[b];
						input[b]=tmp;
						break;
					}
				}
			}
		}
		
		for(int e=N-1;e>=0;e--){
			cout<<input[e];
		}
		cout<<endl;
	}
	return 0;
}
