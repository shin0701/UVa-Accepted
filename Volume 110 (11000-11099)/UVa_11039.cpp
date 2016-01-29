//UVa 11039

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int p;
	while(cin>>p){
		for(int a=0;a<p;a++){
			int n;
			cin>>n;
			
			vector<int> red, blue;
			int input;
			bool empty=false;
			char now;
			
			for(int b=0;b<n;b++){
				cin>>input;
				if(input>0){
					blue.push_back(input);
				}
				else{
					red.push_back(abs(input));
				}
			}
			
			if(!red.empty()){
				sort(red.begin(), red.end());
				now='R';
			}
			else{
				empty=true;
			}
			if(!blue.empty()){
				sort(blue.begin(), blue.end());
				now='B';
			}
			else{
				empty=true;
			}
			
			if(empty==false){
				if(red[0]<blue[0]){
					now='R';
				}
				else{
					now='B';
				}
			}
			
			int count=0, nowNumber=0;
			while(true){
				if(now=='R'){
					while(true){
						if(red.empty()){
							break;
						}
						if(red[0]>=nowNumber){
							break;
						}
						if(red[0]<nowNumber){
							red.erase (red.begin());
						}
					}
					if(!red.empty()){
						nowNumber=red[0];
						count++;
						now='B';
					}
					else{
						break;
					}
				}
				else{
					while(true){
						if(blue.empty()){
							break;
						}
						if(blue[0]>=nowNumber){
							break;
						}
						if(blue[0]<nowNumber){
							blue.erase (blue.begin());
						}
					}
					if(!blue.empty()){
						nowNumber=blue[0];
						count++;
						now='R';
					}
					else{
						break;
					}
				}
			}
			
			cout<<count<<endl;
		}
	}
	return 0;
}
