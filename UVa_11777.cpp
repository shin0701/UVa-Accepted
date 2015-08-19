//UVa 11777

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		for(int a=0;a<input;a++){
			int term1, term2, final, attendance, test[3]={0};
			cin>>term1>>term2>>final>>attendance>>test[0]>>test[1]>>test[2];
			sort(test, test+3);
			
			int grade=term1+term2+final+attendance+(test[1]+test[2])/2;
			
			cout<<"Case "<<a+1<<": ";
			if(grade>=90){
				cout<<"A"<<endl;
			}
			else if(grade>=80){
				cout<<"B"<<endl;
			}
			else if(grade>=70){
				cout<<"C"<<endl;
			}
			else if(grade>=60){
				cout<<"D"<<endl;
			}
			else{
				cout<<"F"<<endl;
			}
		}
	}
	return 0;
}
