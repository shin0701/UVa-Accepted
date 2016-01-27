//UVa 10071

import java.io.*;
import java.util.*;
 
class Main {
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		String input;
		
		while(cin.hasNext()){
			int v=cin.nextInt();
			int t=cin.nextInt();
			
			int s=0;
			s=v*2*t;
			System.out.println(s);
		}
	}
}
