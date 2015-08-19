//UVa 11830

import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			String D=cin.next();
			String N=cin.next();
			if("0".equals(D)&&"0".equals(N)){
				break;
			}
			String result=N.replace(D, "");
			
			if("".equals(result)){
				System.out.println(0);
			}
			else if('0'==result.charAt(0)){
				int begin=result.length()-1;
				for(int a=0;a<result.length();a++){
					if(result.charAt(a)!='0'){
						begin=a;
						break;
					}
				}
				System.out.println(result.substring(begin, result.length()));
			}
			else{
				System.out.println(result);
			}
		}
	}
}
