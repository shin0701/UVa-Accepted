//UVa 10420

import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			int number=cin.nextInt();
			ArrayList<String> country = new ArrayList<String>();
			
			for(int a=0;a<number+1;a++){
				String input=cin.nextLine();
				String[] data=input.trim().split(" ");
				
				country.add(data[0]);
			}
			Collections.sort(country);
			
			String cCountry="";
			int count=0;
			for(int b=1;b<number+1;b++){
				if(cCountry.equals(country.get(b))){
					count++;
				}
				else{
					if(b!=1){
						System.out.println(cCountry+" "+count);
					}
					count=1;
					cCountry=country.get(b);
				}
				if(b==number){
					System.out.println(cCountry+" "+count);
				}
			}
		}
	}
}
