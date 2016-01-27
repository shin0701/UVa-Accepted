//UVa 272

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count=0;
	while(getline(cin,s)){
		for(int a=0;a<s.length();a++){
			if(s[a]=='"'){
				count++;
				if(count%2==0){
					cout<<"''";
				}
				else{
					cout<<"``";
				}
			}
			else{
				cout<<s[a];
			}
		}
		cout<<endl;
	}
	
	return 0;
}
