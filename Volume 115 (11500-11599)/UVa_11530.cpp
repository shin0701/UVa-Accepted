//UVa 11530

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
	int word[26];
	int count=1;
	for(int b=0;b<26;b++){
		if(b!=18&&b!=25){
			word[b]=count;
			if(count==3){
				count=0;
			}
			count++;
		}
		else{
			word[b]=4;
		}
	}
 
 
	int input;
	while(cin>>input){
		for(int a=0;a<input+1;a++){
			int times=0;
			string data;
			getline(cin, data);
			int totalCount=0;
 
			for(int c=0;c<data.length();c++){
				if(data[c]!=' '){
					totalCount+=word[(int)data[c]-97];
 				}
 				else{
 					totalCount++;
 				}
			}
			if(a>0){
				cout<<"Case #"<<a<<": "<<totalCount<<endl;
			}
		}
	}
	return 0;
}
