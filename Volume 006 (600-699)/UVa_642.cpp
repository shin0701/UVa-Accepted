//UVa 642

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string dictionary[110];
	char dChar[50];
	int  dInt[110][50];
	int dSize=0;
	cin>>dictionary[0];
	while(dictionary[dSize]!="XXXXXX"){
		dSize++;
		cin>>dictionary[dSize];
	}
	sort(dictionary, dictionary+dSize);
	for(int d=0;d<dSize;d++){
		strcpy(dChar,dictionary[d].c_str());
		for(int b=0;b<dictionary[d].length();b++){
			dInt[d][b]=(int)dChar[b];
		}
		sort(dInt[d], dInt[d]+dictionary[d].length());
	}
	
	string word;
	char wChar[50];
	int  wInt[50];
	cin>>word;
	while(word!="XXXXXX"){
		bool check=false;
		strcpy(wChar,word.c_str());
		for(int c=0;c<word.length();c++){
			wInt[c]=(int)wChar[c];
		}
		sort(wInt, wInt+word.length());
		
		for(int a=0;a<dSize;a++){
			if(word.length()==dictionary[a].length()){
				if(equal(dInt[a], dInt[a]+word.length(), wInt)){
					cout<<dictionary[a]<<endl;
					check=true;
				}
			}
		}
		
		if(check==false){
			cout<<"NOT A VALID WORD"<<endl;
		}
		cout<<"******"<<endl;
		cin>>word;
	}
	
	return 0;
}
