//UVa 11968

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	while(cin>>T){
		for(int a=0;a<T;a++){
			int N, M, K;//N: 所有商品的數量  M: 蛋糕的數量  K: 飲料的數量
			cin>>N>>M>>K;
			
			double price[N]={0};
			long double average=0;
			for(int b=0;b<N;b++){
				cin>>price[b];
				average+=price[b];
			}
			average=average/N;
			
			double cake=abs(average-price[0]), drink=abs(average-price[M]);
			int cakePrice=price[0], drinkPrice=price[M];
			for(int c=0;c<M+K;c++){
				if(c<M){
					if(abs(average-price[c])<cake||(abs(average-price[c])==cake&&price[c]<cakePrice)){
						cake=abs(average-price[c]);
						cakePrice=price[c];
					}
				}
				else{
					if(abs(average-price[c])<drink||(abs(average-price[c])==drink&&price[c]<drinkPrice)){
						drink=abs(average-price[c]);
						drinkPrice=price[c];
					}
				}
			}
			
			cout<<"Case #"<<a+1<<": "<<cakePrice<<" "<<drinkPrice<<endl;
		}
	}
	return 0;
}
