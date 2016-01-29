//UVa 1339

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string input1, input2;
	while(cin>>input1>>input2){
		int count1[26]={0}, count2[26]={0};
		
		for(int a=0;a<input1.length();a++){
			count1[(int)input1[a]-65]++;
			count2[(int)input2[a]-65]++;
		}
		
		sort(count1, count1+26);
		sort(count2, count2+26);
		
		bool check=true;
		for(int b=0;b<26;b++){
			if(count1[b]!=count2[b]){
				check=false;
			}
		}
		
		if(check==true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}