//UVa 11799

import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			int input=cin.nextInt();
			for(int a=0;a<input+1;a++){
				if(a>0){
					String number=cin.nextLine();
					String[] numberArray = number.split(" ");
					int max=0;
					
					for(int b=0;b<numberArray.length; b++){
						if(Integer.valueOf(numberArray[b])>max){
							max=Integer.valueOf(numberArray[b]);
						}
					}
					
					System.out.println("Case "+a+": "+max);
				}
				else{
					String data=cin.nextLine();
				}
			}
		}
	}
}
