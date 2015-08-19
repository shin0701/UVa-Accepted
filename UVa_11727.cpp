//UVa 11727

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		for(int a=0;a<input;a++){
			int salary[3]={0};
			cin>>salary[0]>>salary[1]>>salary[2];
		
			sort(salary, salary+3);
			
			cout<<"Case "<<a+1<<": "<<salary[1]<<endl;
		}
	}
	return 0;
}
