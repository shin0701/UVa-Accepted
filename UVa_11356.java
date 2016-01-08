//UVa 11356

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Date;
import java.text.SimpleDateFormat;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			int T=cin.nextInt();
			for(int a=0;a<T;a++){
				String date=cin.next();
				int days=cin.nextInt();
				
				Date input = new SimpleDateFormat("yyyy-MMMMM-dd").parse(date);
				
				Calendar cal = Calendar.getInstance();
				cal.setTime(input);
				cal.add(Calendar.DATE, days);
				
				System.out.println("Case "+(a+1)+": "+(new SimpleDateFormat("yyyy-MMMMM-dd")).format(cal.getTime()));
			}
		}
	}
}
