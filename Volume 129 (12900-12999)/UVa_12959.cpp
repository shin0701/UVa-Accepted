//UVa 12959

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int J, R;
	while(cin>>J>>R){
		int point=0, maxPoint=0, maxIndex=0;
		// int point[J][R];
		// memset(point, 0, sizeof(point)); 
		int totalPoint[J]={0};
		
		for(int a=0;a<R;a++){
			for(int b=0;b<J;b++){
				cin>>point;
				totalPoint[b]+=point;
			}
		}
		
		for(int c=0;c<J;c++){
			if(totalPoint[c]>maxPoint){
				maxPoint=totalPoint[c];
				maxIndex=c;
			}
			else if(totalPoint[c]==maxPoint){
				maxIndex=c;
			}
		}
		
		cout<<maxIndex+1<<endl;
	}
	return 0;
}