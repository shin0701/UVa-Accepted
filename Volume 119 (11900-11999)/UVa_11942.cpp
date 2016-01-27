//UVa 11942

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		cout<<"Lumberjacks:"<<endl;
		
		for(int i=0;i<N;i++){
			int beard[10]={0}, afterSort[10]={0};
			for(int j=0;j<10;j++){
				cin>>beard[j];
				afterSort[j]=beard[j];
			}
			sort(beard, beard+10);
			
			bool ASC=true, DESC=true;
			for(int k=0;k<10;k++){
				if(beard[k]!=afterSort[k]){
					ASC=false;
				}
				if(beard[k]!=afterSort[9-k]){
					DESC=false;
				}
			}
			
			if(ASC==false&&DESC==false){
				cout<<"Unordered"<<endl;
			}
			else{
				cout<<"Ordered"<<endl;
			}
		}
	}
	return 0;
}
