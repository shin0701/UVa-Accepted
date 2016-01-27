//UVa 579

//時針: 一個小時30度，一分鐘0.5度
//分針: 一分鐘6度

#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main() {
	string input;
	int H=0, M=0;
	while(getline(cin, input)){
		float degress=0, Hdegress=0, Mdegress=0;
		
		H=stoi(input.substr(0, input.find(":")));
		M=stoi(input.substr(input.find(":")+1, input.length()));
		
		if(H==0&&M==0){
			return 0;
		}
		
		//Hour
		Hdegress=(float)H*30;
		Hdegress+=((float)M/60)*30;
		//Minute
		Mdegress=((float)M/60)*360;
		
		if(Hdegress>Mdegress){	
			degress=Hdegress-Mdegress;
		}
		else{
			degress=Mdegress-Hdegress;
		}
		if(degress>180){
			degress=360-degress;
		}
		cout<<fixed<<setprecision(3)<<degress<<endl;
	}
	
	return 0;
}
