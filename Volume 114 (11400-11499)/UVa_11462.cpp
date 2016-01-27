//UVa 11462

#include <iostream>
using namespace std;

int main() {
	int people=0;
	while(cin>>people){
		if(people!=0){
			int ages[101]={0};
			int age=0;
			for(int a=0;a<people;a++){
				cin>>age;
				ages[age]++;
			}
			
			bool first=true;
			
			for(int b=0;b<101;b++){
				if(ages[b]!=0){
					for(int c=0;c<ages[b];c++){
						if(first==true){
							cout<<b;
							first=false;
						}
						else{
							cout<<" "<<b;
						}
					}
				}
			}
			cout<<endl;
		}
		else{
			return 0;
		}
	}
	return 0;
}
