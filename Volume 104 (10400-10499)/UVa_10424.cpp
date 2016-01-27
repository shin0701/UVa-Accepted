//UVa 10424

#include <iostream>
#include <cstring>
#include <iomanip> 
using namespace std;

int count(string input){
	int count=0;
	for(int a=0;a<input.length();a++){
		if(input[a]>='A'&&input[a]<='Z'){
			count+=((int)input[a]-(int)'A'+1);
		}
		if(input[a]>='a'&&input[a]<='z'){
			count+=((int)input[a]-(int)'a'+1);
		}
	}
	
	int tmp=0;
	while(true){
		if(count>0){
			tmp+=count%10;
			count/=10;
		}
		else if(tmp>=10){
			count=tmp;
			tmp=0;
		}
		else{
			count=tmp;
			break;
		}
	}
	return count;
}

int main() {
	string input1, input2;
	while(getline(cin,input1)&&getline(cin,input2)){
		int count1=count(input1);
		int count2=count(input2);
		
		if(count1==0&&count2==0){
			cout<<endl;
		}
		else if(count1==0||count2==0){
			cout<<"0.00 %"<<endl;
		}
		else if(count1>count2){
			cout<<fixed<<setprecision(2)<<((float)count2/(float)count1)*100<<" %"<<endl;
		}
		else{
			cout<<fixed<<setprecision(2)<<((float)count1/(float)count2)*100<<" %"<<endl;
		}
	}
	return 0;
}
