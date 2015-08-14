//UVa 11233

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int tableNumber, number;
	while(cin>>tableNumber>>number){
		string before[tableNumber], after[tableNumber];
		for(int a=0;a<tableNumber;a++){
			cin>>before[a]>>after[a];
		}
		
		string input;
		for(int b=0;b<number;b++){
			cin>>input;
			
			int tableIndex=-1;
			for(int c=0;c<tableNumber;c++){
				if(before[c]==input){
					tableIndex=c;
					cout<<after[c]<<endl;
				}
			}
			
			if(tableIndex==-1){
				int end=input.length()-1, end2=input.length()-2;
				//end="y" -> "ies"
				if(input[end]=='y'){
					if(input[end2]!='a'&&input[end2]!='e'&&input[end2]!='i'
						&&input[end2]!='o'&&input[end2]!='u'){
							cout<<input.substr(0, end)<<"ies"<<endl;
						}
					else{
						cout<<input<<"s"<<endl;
					}
				}
				//end="o", "s", "ch", "sh", "x" -> +"es"
				else if(input[end]=='o'||input[end]=='s'||input[end]=='x'||
						((input[end2]=='c'||input[end2]=='s')&&input[end]=='h')){
					cout<<input<<"es"<<endl;
				}
				//end+"s"
				else{
					cout<<input<<"s"<<endl;
				}
			}
		}
	}
	return 0;
}
