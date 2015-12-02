//UVa 573

#include <iostream>
using namespace std;

int main() {
	int H, D;
	float U, F;
	 
	while(cin>>H>>U>>D>>F){
		if(H==0){
			break;
		}
		
		int dayCount=0;
		float dist=0;
		F=U*F/100;
		
		while(dist<=H){
			dist=dayCount>0?dist-D:dist;
			if(dist<0){
				break;
			}
			
			dist+=U;
			U=U-F>0?U-F:0;
			dayCount++;
		}
		
		if(dist>0){
			cout<<"success on day "<<dayCount<<endl;
		}
		else{
			cout<<"failure on day "<<dayCount<<endl;
		}
	}
	return 0;
}
