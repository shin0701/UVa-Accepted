//UVa 11340

#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		for(int a=0;a<N;a++){
			int K=0;
			cin>>K;
			
			string text, tmp;
			int money[K]={0};
			for(int b=0;b<K;b++){
				cin>>tmp>>money[b];
				text+=tmp;
			}
			
			int M=0, count=0;
			cin>>M;
			for(int c=0;c<=M;c++){
				string input;
				getline(cin, input);
				
				for(int d=0;d<input.length();d++){
					if(text.find(input[d])>=0&&text.find(input[d])<K){
						count+=money[text.find(input[d])];
					}
				}
			}
			
			cout<<fixed<<setprecision(2)<<count*0.01<<"$"<<endl;
			
		}
	}
	return 0;
}
