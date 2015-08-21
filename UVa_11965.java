//UVa 11965

import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			int T=cin.nextInt();
			for(int a=0;a<T;a++){
				int N=cin.nextInt();
				if(a>0){
					System.out.println();
				}
				System.out.println("Case "+(a+1)+":");
				
				for(int b=0;b<N+1;b++){
					String text=cin.nextLine();
					if(b>0){
						System.out.println(text.replaceAll(" +", " "));
					}
				}
			}
		}
	}
}
