//UVa 11650

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		for(int a=0;a<input;a++){
			string time;
			cin>>time;
			
			int hr=stoi(time.substr(0, 2));
			int min=stoi(time.substr(3, 2));
			
			hr=(min!=0)?11-hr:12-hr;
			hr=(hr<=0)?hr+12:hr;
			min=(min!=0&&min!=30)?60-min:min;
			
			cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<min<<endl;
		}
	}
	return 0;
}
