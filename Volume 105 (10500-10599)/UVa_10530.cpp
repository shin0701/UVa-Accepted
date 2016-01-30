//UVa 10530

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int guess, max=11, min=0;
	string response[2];
	bool first=true;
	while(true){
		cin>>guess;
		if(guess==0){
			break;
		}
		
		cin>>response[0]>>response[1];
		
		if(response[1]=="high"&&guess<max){
			max=guess;
		}
		else if(response[1]=="low"&&guess>min){
			min=guess;
		}
		else if(response[1]=="on"){
			if(guess>min&&guess<max){
				cout<<"Stan may be honest"<<endl;
			}
			else{
				cout<<"Stan is dishonest"<<endl;
			}
			
			max=11;
			min=0;
		}
	}
	return 0;
}
