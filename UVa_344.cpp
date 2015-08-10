//UVa 344

#include <iostream>
#include <string>
using namespace std;

int main() {
	int input;
	
	while(cin>>input){
		int i=0, v=0, x=0, l=0, c=0;
		if(input!=0){
			for(int a=1;a<=input;a++){
				if(a==100){
					c++;
				}
				if(a/10==9){
					c++;
					x++;
				}
				else if(a/10>4&&a/10<9){
					x=x+(a/10)-5;
					l++;
				}
				else if(a/10==4){
					x++;
					l++;
				}
				else{
					x=x+(a/10);
				}
				if(a%10==9){
					i++;
					x++;
				}
				else if(a%10>4&&a%10<9){
					v++;
					i=i+(a%10)-5;
				}
				else if(a%10==4){
					v++;
					i++;
				}
				else{
					i=i+(a%10);
				}
			}
			cout<<input<<": "<<i<<" i, "<<v<<" v, "<<x<<" x, "<<l<<" l, "<<c<<" c"<<endl;
		}
		else{
			return 0;
		}
	}
	
	return 0;
}
