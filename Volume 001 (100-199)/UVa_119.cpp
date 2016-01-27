//UVa 119

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int number;
	bool first=true;
	while(cin>>number){
		string name[number];
		for(int a=0;a<number;a++){
			cin>>name[a];
		}
		
		int money[number]={0};
		string input;
		for(int b=0;b<number;b++){
			cin>>input;
			int index=distance(name, find(name, name+number,input));
			
			int budget, number2;
			cin>>budget>>number2;
			if(budget!=0&&number2!=0){
				money[index]=money[index]-budget+budget%number2;
			}
				
			for(int c=0;c<number2;c++){
				cin>>input;
				if(budget!=0){
					money[distance(name, find(name, name+number,input))]+=budget/number2;
				}
			}
		}
		
		if(first==true){
			first=false;
		}
		else{
			cout<<endl;
		}
		
		for(int d=0;d<number;d++){
			cout<<name[d]<<" "<<money[d]<<endl;
		}
	}
	return 0;
}
