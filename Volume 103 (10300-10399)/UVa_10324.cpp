//UVa 10324

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
	string input;
	int count=0;
	while(cin>>input){
		int n;
		cin>>n;
		
		cout<<"Case "<<++count<<":"<<endl;
		
		for(int a=0;a<n;a++){
			int i, j;
			cin>>i>>j;
			
			string tmp=input.substr(min(i, j), max(i, j)-min(i, j)+1);
			
			bool check=true;
			for(int b=0;b<tmp.length()-1;b++){
				if(tmp[b]!=tmp[b+1]){
					check=false;
					break;
				}
			}
			
			if(check==true){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
