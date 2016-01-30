//UVa 11565

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N;
	while(cin>>N){
		for(int a=0;a<N;a++){
			int A, B, C;
			cin>>A>>B>>C;
			// x + y + z = A
			// xyz = B
			// x^2 + y^2 + z^2 = C
			
			bool check=false;
			int x, y, z;
			for(int b=-25;b<25;b++){
				if(b*b<=C){
					for(int c=0-(A-b);c<A-b;c++){
						if(b*b+c*c<=C && b!=c){
							if(b*c*(A-b-c)==B && b*b+c*c+(A-b-c)*(A-b-c)==C && check==false && A-b-c!=b && A-b-c!=c){
								check=true;
								x=b;
								y=c;
								z=A-b-c;
								break;
							}
						}
					}
				}
			}
			
			if(check==true){
				cout<<x<<" "<<y<<" "<<z<<endl;
			}
			else{
				cout<<"No solution."<<endl;
			}
		}
	}
	return 0;
}
