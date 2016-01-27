//UVa 11172

import java.io.*;
import java.util.*;
 
class Main {
 
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int number;
		number=cin.nextInt();
		
		for(int a=0;a<number;a++){
			int input1,input2;
			input1=cin.nextInt();
			input2=cin.nextInt();
			
			if(input1>input2)
				System.out.println(">");
			else if(input1<input2)
				System.out.println("<");
			else if(input1==input2)
				System.out.println("=");
		}
	}
}
