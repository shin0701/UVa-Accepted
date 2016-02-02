//UVa 12554

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string song[16]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", 
					"Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	int n;
	while(cin>>n){
		string name[n];
		for(int a=0;a<n;a++){
			cin>>name[a];
		}
		
		int count=0;
		while(true){
			if(count%16==0&&count>n){
				break;
			}
			cout<<name[count%n]<<": "<<song[count%16]<<endl;
			count++;
		}
	}
	return 0;
}
