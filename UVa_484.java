//UVa 484

import java.io.*;
import java.util.*;
 
class Main {
 
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int input;
		int [][]count=new int [10000][2];
		int length=0,flag=0;
 
		while(cin.hasNext()){
			boolean check=false;
			input=cin.nextInt();
			
			for(int a=0;a<length;a++){
				if(check==false&&input==count[a][0]){
					check=true;
					flag=a;
				}
				if(check==true){
					break;
				}
			}
			if(check==true){
				count[flag][1]++;
			}
			if(check==false){
				count[length][0]=input;
				count[length][1]++;
				length++;
			}
		}
		for(int b=0;b<length;b++){
			System.out.println(count[b][0]+" "+count[b][1]);
		}
	}
}
