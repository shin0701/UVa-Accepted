//UVa 637

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
			int number=cin.nextInt();
			if(number>0){
				int book[][];
				int length=0;
				if(number%4==0){
					length=number/2;
				}
				else{
					length=(number/4+1)*2;
				}
				book = new int [length][2];
		
				int count=0;
				int count1=1;
				for(int a=1;a<=number;a++){
					book[count][count1]=a;
					if(a<length){
						count++;
					}
					if(a>length){
						count--;
					}
					if(count1==0){
						count1=1;
					}
					else{
						count1=0;
					}
				}
				System.out.println("Printing order for "+number+" pages:");
				int count2=1;
				for(int b=0;b<length;b++){
					if(b%2!=0){
						if(book[b][0]==0&&book[b][1]==0){
							//System.out.println("Sheet "+count2+", back : Blank, Blank");
						}
						else if(book[b][0]==0&&book[b][1]!=0){
							System.out.println("Sheet "+count2+", back : Blank, "+book[b][1]);
						}
						else if(book[b][0]!=0&&book[b][1]==0){
							System.out.println("Sheet "+count2+", back : "+book[b][0]+", Blank");
						}
						else{
							System.out.println("Sheet "+count2+", back : "+book[b][0]+", "+book[b][1]);
						}
						count2++;
					}
					else{
						if(book[b][0]==0&&book[b][1]==0){
							//System.out.println("Sheet "+count2+", front: Blank, Blank");
							
						}
						else if(book[b][0]==0&&book[b][1]!=0){
							System.out.println("Sheet "+count2+", front: Blank, "+book[b][1]);
						}
						else if(book[b][0]!=0&&book[b][1]==0){
							System.out.println("Sheet "+count2+", front: "+book[b][0]+", Blank");
						}
						else{
							System.out.println("Sheet "+count2+", front: "+book[b][0]+", "+book[b][1]);
						}
					}
				}
			}
			else{
				break;
			}
		}
	}
}
