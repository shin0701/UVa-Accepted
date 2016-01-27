//UVa 424

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string veryLongInt[101];
	int count=0, maxLen=0;
	while(cin>>veryLongInt[count]){
		if(veryLongInt[count]!="0"){
			reverse(veryLongInt[count].begin(), veryLongInt[count].end());
			if(veryLongInt[count].length()>maxLen){
				maxLen=veryLongInt[count].length();
			}
			count++;
		}
		else{
			break;
		}
	}
	
	int add[maxLen]={0};
	for(int a=0;a<maxLen;a++){
		for(int b=0;b<count;b++){
			add[a]+=(int)veryLongInt[b][a]-48;
		}
	}
	
	int carry=0;
	for(int c=0;c<maxLen;c++){
		add[c]+=carry;
		if(add[c]>=10){
			carry=add[c]/10;
			add[c]%=10;
		}
		else{
			carry=0;
		}
	}
	reverse(add, add+maxLen);
	
	if(carry>0){
		cout<<carry;
	}
	for(int d=0;d<maxLen;d++){
		cout<<add[d];
	}
	cout<<endl;
	
	return 0;
}
