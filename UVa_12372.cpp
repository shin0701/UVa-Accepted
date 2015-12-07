//UVa 12372

#include <iostream>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			int L, W, H;
			cin>>L>>W>>H;
			
			if(L>20||W>20||H>20){
				cout<<"Case "<<a+1<<": bad"<<endl;
			}
			else{
				cout<<"Case "<<a+1<<": good"<<endl;
			}
		}
	}
	return 0;
}
