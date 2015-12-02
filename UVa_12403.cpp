//UVa 12403

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		int total=0;
		string input;
		for(int a=0;a<T+1;a++){
			getline(cin, input);
			
			if(a>0){
				if(input=="report"){
					cout<<total<<endl;
				}
				else{
					total+=stoi(input.substr(input.find(" ")+1));
				}
			}
		}
	}
	return 0;
}
