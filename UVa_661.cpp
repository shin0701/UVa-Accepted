//UVa 661

#include <iostream>
using namespace std;

int main() {
	int n, m, c, count=1;
	while(cin>>n>>m>>c){
		if(n==0&&m==0&&c==0){
			break;
		}
		
		int I[n+1]={0}, status[n+1]={0}, Switch, totalI=0, maxI=0;
		
		for(int a=1;a<=n;a++){
			cin>>I[a];
		}
		for(int b=0;b<m;b++){
			cin>>Switch;
			
			if(status[Switch]==0){ //turn on
				totalI+=I[Switch];
				if(totalI>maxI){
					maxI=totalI;
				}
				status[Switch]=1;
			}
			else{ //turn off
				totalI-=I[Switch];
				status[Switch]=0;
			}
		}
		
		cout<<"Sequence "<<count<<endl;
		if(maxI>c){
			cout<<"Fuse was blown."<<endl<<endl;
		}
		else{
			cout<<"Fuse was not blown."<<endl;
			cout<<"Maximal power consumption was "<<maxI<<" amperes."<<endl<<endl;
		}
		count++;
	}
	return 0;
}
