//UVa 1237

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			if(a>0){
				cout<<endl;
			}
			
			int D;
			cin>>D;
			
			string maker[D];
			int L[D]={0}, H[D]={0};
			for(int b=0;b<D;b++){
				cin>>maker[b]>>L[b]>>H[b];
			}
			
			int Q, query;
			cin>>Q;
			for(int c=0;c<Q;c++){
				cin>>query;
				
				int index=0, count=0;
				bool undetermined=false;
				for(int d=0;d<D;d++){
					if(query>=L[d]&&query<=H[d]){
						if(undetermined==false){
							index=d;
						}
						else{
							undetermined=true;
						}
						count++;
					}
				}
				
				if(undetermined==false&&count==1){
					cout<<maker[index]<<endl;
				}
				else{
					cout<<"UNDETERMINED"<<endl;
				}
			}
			
		}
	}
	return 0;
}
