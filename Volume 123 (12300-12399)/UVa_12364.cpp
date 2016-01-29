//UVa 12364

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string braille[10][3]={
		{".*", "**", ".."}, //0
		{"*.", "..", ".."}, //1
		{"*.", "*.", ".."}, //2
		{"**", "..", ".."}, //3
		{"**", ".*", ".."}, //4
		{"*.", ".*", ".."}, //5
		{"**", "*.", ".."}, //6
		{"**", "**", ".."}, //7
		{"*.", "**", ".."}, //8
		{".*", "*.", ".."} //9
	};
	
	int D;
	while(cin>>D){
		if(D==0){
			break;
		}
		char type;
		cin>>type;
		
		if(type=='S'){
			string input;
			cin>>input;
			
			string output[3];
			for(int b=0;b<input.length();b++){
				for(int c=0;c<3;c++){
					if(b>0){
						output[c]+=" ";
					}
					output[c]+=braille[(int)input[b]-48][c];
				}
			}
			
			for(int d=0;d<3;d++){
				cout<<output[d]<<endl;
			}
		}
		else{
			string input[3];
			for(int a=0;a<=3;a++){
				if(a==0){
					getline(cin, input[a]);
				}
				else{
					getline(cin, input[a-1]);
				}
			}
			
			string output;
			for(int e=0;e<(input[0].length()+1)/3;e++){
				string line1=input[0].substr(3*e, 2);
				string line2=input[1].substr(3*e, 2);
				string line3=input[2].substr(3*e, 2);
				
				for(int f=0;f<10;f++){
					if(line1==braille[f][0]&&line2==braille[f][1]&&line3==braille[f][2]){
						output+=to_string(f);
						break;
					}
				}
			}
			
			cout<<output<<endl;
		}
	}
	return 0;
}
