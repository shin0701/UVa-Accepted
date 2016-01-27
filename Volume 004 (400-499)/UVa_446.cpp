//UVa 446

#include <iostream>
#include <cstring>
#include <bitset>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		if(N<0){
			break;
		}
		
		for(int a=0;a<N;a++){
			string hex1, hex2, Operator;
			cin>>hex1>>Operator>>hex2;
			
			int dec1=stoi(hex1,nullptr,16);
			int dec2=stoi(hex2,nullptr,16);
			bitset<13> bin1(dec1);
			bitset<13> bin2(dec2);
			
			if(Operator=="+"){
				cout<<bin1<<" + "<<bin2<<" = "<<dec1+dec2<<endl;
			}
			else{
				cout<<bin1<<" - "<<bin2<<" = "<<dec1-dec2<<endl;
			}
		}
	}
	return 0;
}
