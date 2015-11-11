//UVa 11805

#include<iostream>
using namespace std;

int main(){
  int T;
  while(cin>>T){
    for(int a=0;a<T;a++){
    	int N, K, P;
    	cin>>N>>K>>P;
    	
    	int number=(K+P)%N;
    	
    	cout<<"Case "<<a+1<<": ";
    	if(number==0){
    		cout<<N<<endl;
    	}
    	else{
    		cout<<number<<endl;
    	}
    }
  }
  return 0;
}
