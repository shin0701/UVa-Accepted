//UVa 488

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n;
  int A, F;
  while(cin>>n){
    for(int i=0;i < n;i++){
      cin>>A>>F;
      
      if(i>0){
      	cout<<endl;
      }
      
      for(int j=0;j<F;j++){
        if(j>0){
      		cout<<endl;
      	}
      	
        for(int k=1;k<=A;k++){
          for(int l=1;l<=k;l++){
          	cout<<k;
          }
          cout<<endl;
        }
        for(int k=A-1;k>=1;k--){
          for(int l=1;l<=k;l++){
          	cout<<k;
          }
          cout<<endl;
        }
      }
    }
  }
  return 0;
}
