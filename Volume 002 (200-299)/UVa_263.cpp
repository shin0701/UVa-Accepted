//UVa 263

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string oNumber;
	while(cin>>oNumber){
		if(oNumber=="0"){
			break;
		}
		
		cout<<"Original number was "<<oNumber<<endl;
		
		int chainLen=0;
		string result=oNumber;
		string saveResult;
		
		while(true){
			string number1=result;
			sort(number1.begin(), number1.end());
			string number2=number1;
			reverse(number2.begin(), number2.end());
			
			cout<<stoll(number2)<<" - "<<stoll(number1)<<" = "<<stoll(number2)-stoll(number1)<<endl;
			chainLen++;
			
			result=to_string(stoll(number2)-stoll(number1));
			if((int)saveResult.find(result)>=0){
				break;
			}
			else{
				saveResult+=" "+result;
			}
		}
		
		cout<<"Chain length "<<chainLen<<endl<<endl;
	}
	return 0;
}
