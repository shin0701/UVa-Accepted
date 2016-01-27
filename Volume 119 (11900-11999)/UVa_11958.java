//UVa 11958

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
				int K=cin.nextInt();
				String[] nowTime=cin.next().split(":");
				Date now = new Date(70, 0, 1, Integer.valueOf(nowTime[0]), Integer.valueOf(nowTime[1]), 0);
				int minTime=10000;
			
				for(int b=0;b<K;b++){
					String[] arrivalTime=cin.next().split(":");
					int Q=cin.nextInt();
					Date arrival = new Date(70, 0, 1, Integer.valueOf(arrivalTime[0]), Integer.valueOf(arrivalTime[1]), 0);
					if(now.after(arrival)){
						arrival = new Date(70, 0, 2, Integer.valueOf(arrivalTime[0]), Integer.valueOf(arrivalTime[1]), 0);
					}
					
					int needTime=(int)(arrival.getTime()-now.getTime())/60000+Q;
					if(needTime<minTime){
						minTime=needTime;
					}
				}
				
				System.out.println("Case "+(a+1)+": "+minTime);
			}
		}
	}
}
