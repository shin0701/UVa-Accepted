//UVa 1587

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string record[6], W, H;
	int count=0;
	bool check=true;
	
	while(cin>>W>>H){
		if(W>H){
			record[count]=H+" "+W;
		}
		else{
			record[count]=W+" "+H;
		}
		
		count++;
		if(count==6){
			string side[3];
			
			sort(record, record+6);
			
			//side[0]=width, side[1]=length, side[2]=height
			//s0 s1, s0 s2, s1 s2
			for(int a=0;a<3;a++){
				W=record[2*a].substr(0, record[a].find(" "));
				H=record[2*a].substr(record[a].find(" ")+1);
				
				if(a==0){
					side[0]=W;
					side[1]=H;
				}
				if(a==1){
					if(W!=side[0]){
						check=false;
					}
				}
				if(a==2){
					side[2]=H;
					
					if(W!=side[1]){
						check=false;
					}
					if(H!=side[2]){
						check=false;
					}
					if(record[2*a-1].substr(record[2*a-1].find(" ")+1)!=side[2]){
						check=false;
					}
				}
				
				if(record[2*a]!=record[2*a+1]){
					check=false;
				}
			}
			
			if(check==true){
				cout<<"POSSIBLE"<<endl;
			}
			else{
				cout<<"IMPOSSIBLE"<<endl;
			}
			
			count=0;
			check=true;
		}
	}
	return 0;
}
