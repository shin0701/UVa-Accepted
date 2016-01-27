//UVa 11677

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Date;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(true){
			int begHr=cin.nextInt();
			int begMin=cin.nextInt();
			int endHr=cin.nextInt();
			int endMin=cin.nextInt();
			
			if(begMin==0&&begHr==0&&endMin==0&&endHr==0){
				break;
			}
			
			Date begin = new Date(70, 0, 1, begHr, begMin, 0);
			Date end = new Date(70, 0, 1, endHr, endMin, 0);
			
			if(begin.after(end)){
				end = new Date(70, 0, 2, endHr, endMin, 0);
			}
			
			System.out.println((end.getTime()-begin.getTime())/60000);
		}
	}
}
