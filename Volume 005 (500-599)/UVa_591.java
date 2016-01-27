//UVa 591

import java.io.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) {
		int number;
		int total,count,setCount=0;
		
		Scanner cin = new Scanner(System.in); //建立輸入處理物件
		number=cin.nextInt();
		
		while(number!=0){
			setCount++;
			count=0;
			total=0;
			
			int box[]=new int [number];
			for(int a=0;a<number;a++){
				box[a]=cin.nextInt();
				total=total+box[a];
			}
			
			total=total/number;//平均
			
			for(int b=0;b<number;b++){
				if(box[b]>total){
					count=count+(box[b]-total);
				}
			}
			
			System.out.println("Set #"+setCount);
			System.out.println("The minimum number of moves is "+count+".");
			System.out.println();
			number=cin.nextInt();
		}
	}
}
