//UVa 11734

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
					String data1=cin.nextLine();
					String data2=cin.nextLine();
				
					boolean WA=false, OFE=false;
				
					if(data1.length()!=data2.length()){
						OFE=true;
					}
				
					data1=data1.replace(" ", "");
					data2=data2.replace(" ", "");
				
					if(data1.length()!=data2.length()){
						WA=true;
					}
					else{
						for(int b=0;b<data1.length();b++){
							if(data1.charAt(b)!=data2.charAt(b)){
								WA=true;
							}
						}
					}
					
					if(WA==true){
						System.out.println("Case "+a+": Wrong Answer");
					}
					else if(OFE==true){
						System.out.println("Case "+a+": Output Format Error");
					}
					else{
						System.out.println("Case "+a+": Yes");
					}
				}
				else{
					String data=cin.nextLine();
				}
			}
		}
	}
}
