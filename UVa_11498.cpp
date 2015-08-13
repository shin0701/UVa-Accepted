//UVa 11498

#include <iostream>
using namespace std;

int main() {
	int number;
	while(cin>>number){
		if(number!=0){
			//division point
			int divisionX, divisionY;
			cin>>divisionX>>divisionY;
			
			int pointX=0, pointY=0;
			for(int a=0;a<number;a++){
				cin>>pointX>>pointY;
				
				// 在邊上: divisa
				if(pointX==divisionX||pointY==divisionY){
					cout<<"divisa"<<endl;
				}
				// 在左上方: NO
				else if(pointX<divisionX&&pointY>divisionY){
					cout<<"NO"<<endl;
				}
				// 在右上方: NE
				else if(pointX>divisionX&&pointY>divisionY){
					cout<<"NE"<<endl;
				}
				// 在左下方: SO
				else if(pointX<divisionX&&pointY<divisionY){
					cout<<"SO"<<endl;
				}
				// 在右下方: SE
				else if(pointX>divisionX&&pointY<divisionY){
					cout<<"SE"<<endl;
				}
			}
		}
		else{
			return 0;
		}
	}
	return 0;
}
