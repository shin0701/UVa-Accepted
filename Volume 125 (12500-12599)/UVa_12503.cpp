//UVa 12503

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int N=0;
	while(cin>>N){
		for(int a=0;a<N;a++){
			int length;
			cin>>length;
			string ins[110];
			for(int b=0;b<length+1;b++){
				getline(cin,ins[b]);
			}
			int count=0;
			for(int c=0;c<length+1;c++){
				if(ins[c]=="LEFT"){
					count--;
				}
				else if(ins[c]=="RIGHT"){
					count++;
				}
				else if(ins[c].substr(0,7)=="SAME AS"){
					stringstream ss;
					ss<<ins[c].substr(8,3);
					int pos;
					ss>>pos;
					ins[c]=ins[pos];
					if(ins[c]=="LEFT"){
						count--;
					}
					else if(ins[c]=="RIGHT"){
						count++;
					}
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
