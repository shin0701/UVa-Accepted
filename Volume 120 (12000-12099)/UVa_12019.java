//UVa 12019

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Date;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			int T=cin.nextInt();
			for(int a=0;a<T;a++){
				int M=cin.nextInt();
				int D=cin.nextInt();
				
				Date input = new Date(111, M-1, D, 0, 0, 0);
				String Day = "";
				//0 = Sunday, 1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Thursday, 5 = Friday, 6 = Saturday
				if(input.getDay()==0){
					Day="Sunday";
				}
				else if(input.getDay()==1){
					Day="Monday";
				}
				else if(input.getDay()==2){
					Day="Tuesday";
				}
				else if(input.getDay()==3){
					Day="Wednesday";
				}
				else if(input.getDay()==4){
					Day="Thursday";
				}
				else if(input.getDay()==5){
					Day="Friday";
				}
				else if(input.getDay()==6){
					Day="Saturday";
				}
				
				System.out.println(Day);
			}
		}
	}
}
