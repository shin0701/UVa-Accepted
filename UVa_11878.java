//UVa 11878

import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		int count=0;
		while(cin.hasNext()){
			String input=cin.nextLine();
			String[] number = input.split("\\+|-|=");
			
			if(!input.contains("?")){
				int n1=Integer.valueOf(number[0]);
				int n2=Integer.valueOf(number[1]);
				int n3=Integer.valueOf(number[2]);
				
				if((input.contains("+")&&n1+n2==n3)||
					(input.contains("-")&&n1-n2==n3)){
						count++;
					}
			}
		}
		System.out.println(count);
	}
}
