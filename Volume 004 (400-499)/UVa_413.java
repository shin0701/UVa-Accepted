//UVa 413

import java.util.*;
import java.lang.*;
import java.io.*;
import java.text.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			String input="";
			int inputNumber=cin.nextInt();
			if(inputNumber==0){
				break;
			}
			
			while(inputNumber!=0){
				input+=inputNumber+" ";
				inputNumber=cin.nextInt();
			}
			
			String[] strNumber = input.split(" ");
			int[] number = new int[strNumber.length];
			for(int b=0;b<strNumber.length;b++){
			   number[b] = Integer.valueOf(strNumber[b]);
			}
			
			List<Integer> UP = new ArrayList<>();
			List<Integer> DOWN = new ArrayList<>();
			// String now=(number[0]>number[1])?"DOWN":"UP";
			String now="";
			int count=0;
			
			for(int a=0;a<number.length-1;a++){
				if(number[a]>number[a+1]){ //DOWN
					if(now.equals("UP")){
						UP.add(count);
						count=1;
						now="DOWN";
					}
					else{
						now="DOWN";
						count++;
					}
				}
				else if(number[a]<number[a+1]){
					if(now.equals("DOWN")){ //UP
						DOWN.add(count);
						count=1;
						now="UP";
					}
					else{
						now="UP";
						count++;
					}
				}
				else{ //EQUAL
					count++;
				}
			}
			
			if(count!=0){
				if(now.equals("UP")){
					UP.add(count);
				}
				else if(now.equals("DOWN")){
					DOWN.add(count);
				}
			}
			
			double uAverage=0, dAverage=0;
			
			for(int c=0;c<UP.size();c++){
				uAverage+=UP.get(c);
			}
			if(uAverage!=0){
				uAverage/=UP.size();
			}
			
			for(int d=0;d<DOWN.size();d++){
				dAverage+=DOWN.get(d);
			}
			if(dAverage!=0){
				dAverage/=DOWN.size();
			}
			
			NumberFormat nf = NumberFormat.getInstance();
			nf.setMinimumFractionDigits(6);	
			
			System.out.println("Nr values = "+number.length+":  "+nf.format(uAverage)+" "+nf.format(dAverage));
		}
	}
}
