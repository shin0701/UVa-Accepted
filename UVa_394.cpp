//UVa 394

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int N, R;
	while(cin>>N>>R){
		string data[N];
		
		getline(cin, data[0]);
		for(int a=0;a<N;a++){
			getline(cin, data[a]);
		}
		
		for(int b=0;b<R;b++){
			//Read data
			string name;
			cin>>name;
			
			int index=0;
			for(int c=0;c<N;c++){
				if(data[c].find(name)<=N){
					index=c;
					break;
				}
			}
			
			char * cstr = new char [data[index].length()+1];
			strcpy (cstr, data[index].c_str());
			char * p = strtok (cstr," ");
			p = strtok (NULL," ");
			int B=atoi(p);
			
			p = strtok(NULL," ");
			int size=atoi(p);
			
			p = strtok(NULL," ");
			int D=atoi(p);
			
			int L[D]={0}, U[D]={0}, i[D]={0};
			for(int d=0;d<D;d++){
				p = strtok(NULL," ");
				L[d]=atoi(p);
				
				p = strtok(NULL," ");
				U[d]=atoi(p);
				
				cin>>i[d];
			}
			
			int C[D]={0};
			for(int f=D-1;f>=0;f--){
				if(f==D-1){
					C[f]=U[f]-L[f]+1;
				}
				else{
					C[f]=C[f+1]*(U[f]-L[f]+1);
				}
			}
			
			//Calculate address
			cout<<name<<"[";
			int count=B;
			for(int e=0;e<D;e++){
				if(e!=D-1){
					cout<<i[e]<<", ";
					count+=(i[e]-L[e])*C[e+1]*size;
				}
				else{
					cout<<i[e];
					count+=(i[e]-L[e]+1)*size;
				}
			}
			
			cout<<"] = "<<count-size<<endl;
		}
	}
	return 0;
}
