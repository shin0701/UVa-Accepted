//UVa 514

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		if(N==0){
			break;
		}
		
		int result[N]={0};
		while(cin>>result[0]){
			if(result[0]==0){
				break;
			}
			int input[N]={0};
			input[0]=1;
			for(int a=1;a<N;a++){
				cin>>result[a];
				input[a]=a+1;
			}
			
			stack<int> tmpStack;
			int iCount=0, rCount=0;
			
			while(iCount<N&&rCount<N){
				tmpStack.push(input[iCount]);
				iCount++;
				
				while(!tmpStack.empty()){
					if(tmpStack.top()==result[rCount]){
						tmpStack.pop();
						rCount++;
					}
					else{
						break;
					}
				}
			}
			
			if(tmpStack.empty()){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
