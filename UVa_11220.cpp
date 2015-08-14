//UVa 11220

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int input;
	while(cin>>input){
		int mailCount=1;
		bool firstMail=true;
			
		for(int a=0;a<input+2;a++){
			string mail;
			
			getline(cin, mail);
			if(mail!=""){
				if(firstMail!=true){
					cout<<endl;
				}
				else{
					firstMail=false;
				}
				cout<<"Case #"<<mailCount<<":"<<endl;
				mailCount++;
			}
			while(mail!=""){
				int count=0;
				
				char * cstr = new char [mail.length()+1];
				strcpy (cstr, mail.c_str());
				char * p = strtok (cstr," ");
				while (p!=0)
				{
					if(strlen(p)>count){
						cout<<p[count];
						count++;
					}
					p = strtok(NULL," ");
				}
				cout<<endl;
				getline(cin, mail);
			}
		}
	}
	return 0;
}
