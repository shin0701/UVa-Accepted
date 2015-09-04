//UVa 10038

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		if(N>1){
			int input[N]={0}, difference[N-1]={0};
			for(int a=0;a<N;a++){
				cin>>input[a];
				if(a>0){
					difference[a-1]=abs(input[a]-input[a-1]);
				}
			}
			sort(difference, difference+(N-1));
			
			bool check=true;
			for(int b=0;b<N-1;b++){
				if(difference[b]!=b+1){
					check=false;
					break;
				}
			}
			
			if(check==true){
				cout<<"Jolly"<<endl;
			}
			else{
				cout<<"Not jolly"<<endl;
			}
		}
		else{
			int input;
			cin>>input;
			cout<<"Jolly"<<endl;
		}
	}
	return 0;
}
