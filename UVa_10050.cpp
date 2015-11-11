//UVa 10050

#include<iostream>
using namespace std;

int main(){
  int T;
  while(cin>>T){
    for(int a=0;a<T;a++){
    	int days, N;
    	cin>>days>>N;
    	
    	int party[N]={0};
    	for(int b=0;b<N;b++){
    		cin>>party[b];
    	}
    	
    	int hartals=0;
    	for(int c=1;c<=days;c++){
    		bool check=false;
    		
    		for(int d=0;d<N;d++){
    			if(c%party[d]==0&&c%7!=6&&c%7!=0){
    				check=true;
    			}
    		}
    		
    		if(check==true){
    			hartals++;
    		}
    	}
    	
    	cout<<hartals<<endl;
    }
  }
  return 0;
}
