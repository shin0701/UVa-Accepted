//UVa 10924

import java.io.*;
import java.util.*;
 
class Main {
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		String input;
		
		while(cin.hasNext()){
			input=cin.next();
			int count=0;
			for(int a=0;a<input.length();a++){
				if(input.charAt(a)>=97&&input.charAt(a)<=122)
					count+=input.charAt(a)-96;
				if(input.charAt(a)>=65&&input.charAt(a)<=90)
					count+=input.charAt(a)-38;
			}
			
			boolean check=true;
			
			for(int b=2;b<count/2+1;b++){
				if(count%b==0)
					check=false;
			}
			
			if(check==true)
				System.out.println("It is a prime word.");
			else
				System.out.println("It is not a prime word.");
			
		}
	}
}
