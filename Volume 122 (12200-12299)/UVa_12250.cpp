//UVa 12250

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string input;
	int caseCount=1;
	
	string word[]={"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
	string language[]={"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
	
	while(getline(cin, input)){
		if(input=="#"){
			break;
		}
		
		int index=distance(word, find(word, word+6,input));
		
		if(index>=6){
			cout<<"Case "<<caseCount<<": UNKNOWN"<<endl;
		}
		else{
			cout<<"Case "<<caseCount<<": "<<language[index]<<endl;
		}
		
		caseCount++;
	}
	return 0;
}
