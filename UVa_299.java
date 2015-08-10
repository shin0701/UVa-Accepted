//UVa 299

import java.io.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); //建立輸入處理物件
		int number=cin.nextInt(); //讀數字
		
		for(int a=0;a<number;a++){
			
			int trainNumber=cin.nextInt(); //讀數字
			int train[]=new int[trainNumber]; //建立train array
			for(int b=0;b<trainNumber;b++){
				train[b]=cin.nextInt();
			}
			//bubble sort
			int sort=0,tmp=0;;
			for(int c=trainNumber-1;c>=0;c--){
				for(int d=0;d<c;d++){
					if(train[d]>train[d+1]){
						tmp=train[d];
						train[d]=train[d+1];
						train[d+1]=tmp;
						sort++;
					}
				}
			}
			System.out.println("Optimal train swapping takes "+sort+" swaps.");
		}
	}
}
