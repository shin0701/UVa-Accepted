//UVa 1586

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			string input;
			cin>>input;
			
			
			// C: 12.01 g/mol
			// H: 1.008 g/mol
			// O: 16.00 g/mol
			// N: 14.01 g/mol
			
			string element="", number="";
			double mass=0;
			bool add=false;
			for(int b=0;b<input.length();b++){
				if(input[b]=='C'||input[b]=='H'||input[b]=='O'||input[b]=='N'){
					element+=input[b];
				}
				else{
					number+=input[b];
				}
				
				if(b+1<input.length()){
					if(input[b+1]>='A'){
						add=true;
					}
					else{
						add=false;
					}
				}
				else{
					add=true;
				}
				
				if(add==true){
					if(number!=""){
						if(element=="C"){
							mass+=12.01*stoi(number);
						}
						if(element=="H"){
							mass+=1.008*stoi(number);
						}
						if(element=="O"){
							mass+=16.00*stoi(number);
						}
						if(element=="N"){
							mass+=14.01*stoi(number);
						}
					}
					else{
						if(element=="C"){
							mass+=12.01;
						}
						if(element=="H"){
							mass+=1.008;
						}
						if(element=="O"){
							mass+=16.00;
						}
						if(element=="N"){
							mass+=14.01;
						}
					}
					
					element="";
					number="";
				}
				
			}
			
			cout<<fixed<<setprecision(3)<<mass<<endl;
		}
	}
	return 0;
}
