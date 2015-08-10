//UVa 576

#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	while(getline(cin, input)){
		if(input!="e/o/i"){
			bool before=false;
			int count=0;
			int sentenceCount=0;
			int sentenceLength[3]={0};
			for(int a=0;a<input.length();a++){
				if((input[a]=='a'||input[a]=='e'||input[a]=='i'
				||input[a]=='o'||input[a]=='u'||input[a]=='y')&&before==false){
					count++;
					before=true;
				}
				else if(input[a]=='a'||input[a]=='e'||input[a]=='i'
				||input[a]=='o'||input[a]=='u'||input[a]=='y'){
					before=true;
				}
				else{
					before=false;
				}
				if(input[a]=='/'||a==input.length()-1){
					sentenceLength[sentenceCount]=count;
					count=0;
					before=false;
					sentenceCount++;
				}
			}
			
			if(sentenceLength[0]!=5){
				cout<<"1"<<endl;
			}
			else if(sentenceLength[1]!=7){
				cout<<"2"<<endl;
			}
			else if(sentenceLength[2]!=5){
				cout<<"3"<<endl;
			}
			else{
				cout<<"Y"<<endl;
			}
		}
		else{
			return 0;
		}
	}
	
	return 0;
}
