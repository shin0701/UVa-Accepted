//UVa 1225

import java.io.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); //建立輸入處理物件
		int number=cin.nextInt();
		
		for(int a=0;a<number;a++){
			int input=cin.nextInt();
			int count[]=new int [10];
			
			for(int b=1;b<=input;b++){
				int cal;
				cal=b;
				while(cal!=0){
					count[cal%10]++;
					cal/=10;
				}
			}
			
			for(int c=0;c<10;c++){
				if(c!=9)
					System.out.print(count[c]+" ");
				else
					System.out.print(count[c]);
			}
			System.out.println();
		}
	}
}
