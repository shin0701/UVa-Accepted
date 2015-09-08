//UVa 10340

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string input1, input2;
	while(cin>>input1>>input2){
		int index1=0, index2=0;
		for(int a=0;a<input2.length();a++){
			if(input2[a]==input1[index1]){
				index1++;
			}
		}
		
		if(index1==input1.length()){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
