//UVa 10260

#include<iostream>
#include<cstring>
using namespace std;

int main(){
  string word;
  while(cin>>word){
  	int length=word.length();
  	int soundex[length]={0};
    for(int a=0;a<length;a++){
    	if(word[a]=='B'||word[a]=='F'||word[a]=='P'||word[a]=='V'){
    		soundex[a]=1;
    	}
    	else if(word[a]=='C'||word[a]=='G'||word[a]=='J'||word[a]=='K'
    			||word[a]=='Q'||word[a]=='S'||word[a]=='X'||word[a]=='Z'){
    		soundex[a]=2;
    	}
    	else if(word[a]=='D'||word[a]=='T'){
    		soundex[a]=3;
    	}
    	else if(word[a]=='L'){
    		soundex[a]=4;
    	}
    	else if(word[a]=='M'||word[a]=='N'){
    		soundex[a]=5;
    	}
    	else if(word[a]=='R'){
    		soundex[a]=6;
    	}
    }
    
    int now=0;
    for(int b=0;b<length;b++){
    	if(soundex[b]!=now){
    		if(soundex[b]!=0){
    			cout<<soundex[b];
    		}
    		now=soundex[b];
    	}
    }
    cout<<endl;
  }
  return 0;
}
