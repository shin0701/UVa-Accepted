//UVa 13055

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		string name[n], query;
		bool inDream=false;
		int count=0;
		
		for(int a=0;a<n;a++){
			cin>>query;
			
			if(query=="Sleep"){
				cin>>name[count];
				count++;
				inDream=true;
			}
			else if(query=="Test"){
				if(inDream==true&&count>0){
					cout<<name[count-1]<<endl;
				}
				else{
					cout<<"Not in a dream"<<endl;
				}
			}
			else if(query=="Kick"){
				if(count>0){
					count--;
				}
				else{
					inDream=false;
				}
			}
		}
	}
	return 0;
}