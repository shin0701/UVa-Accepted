//UVa 136

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int count=1, number[1505]={0};
	int idx2=1, idx3=1, idx5=1;
	number[1]=1;
	for(int a=2;a<1501;a++){
		while(number[idx2]*2<=number[a-1]){
			idx2++;
		}
		while(number[idx3]*3<=number[a-1]){
			idx3++;
		}
		while(number[idx5]*5<=number[a-1]){
			idx5++;
		}
		
		number[a]=min(number[idx2]*2, min(number[idx3]*3, number[idx5]*5));
	}
	cout<<"The 1500'th ugly number is "<<number[1500]<<"."<<endl;
	
	return 0;
}
