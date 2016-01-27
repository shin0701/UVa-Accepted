//UVa 11946

import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		String[] codeNumber={"O", "I", "Z", "E", "A", "S", "G", "T", "B", "P"};
		while(cin.hasNext()){
			int T=cin.nextInt();
			
			for(int a=0;a<T+1;a++){
				if(a>0){
					String message=" ";
					while(message!=""&&cin.hasNext()){
						message=cin.nextLine();
						
						for(int b=0;b<10;b++){
							message=message.replace(String.valueOf(b), codeNumber[b]);
						}
						System.out.println(message);
					}
				}
				else{
					String data=cin.nextLine();
				}
			}
		}
	}
}
