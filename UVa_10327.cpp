//UVa 10327

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int N;
  while(cin>>N){
  	int input[N]={0};
    for(int a=0;a<N;a++){
    	cin>>input[a];
    }
    
    int count=0;
    for(int b=0;b<N-1;b++){
    	for(int c=0;c<N-b-1;c++){
    		if(input[c]>input[c+1]){
    			int tmp=input[c];
    			input[c]=input[c+1];
    			input[c+1]=tmp;
    			count++;
    		}
    	}
    }
    
    cout<<"Minimum exchange operations : "<<count<<endl;
  }
  return 0;
}
