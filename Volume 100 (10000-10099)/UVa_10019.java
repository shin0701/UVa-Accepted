//UVa 10019

import java.io.*;
import java.util.*;
 
class Main {
 
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); //建立輸入處理物件
		int number;
		number=cin.nextInt();
 
		for(int a=0;a<number;a++){
			int input;
			input=cin.nextInt();
 
			int N,M;
			N=input;
			M=input;
 
			String X1;
			X1=Integer.toBinaryString(N);
 
			int B1=0;
			for(int b=0;b<X1.length();b++){
				if(X1.charAt(b)=='1'){
					B1++;
				}
			}
 
			int X2Tmp;
			String X2,NTmp;
			NTmp=Integer.toString(N);
			X2Tmp=Integer.parseInt(NTmp,16);
			X2=Integer.toBinaryString(X2Tmp);
 
			int B2=0;
			for(int c=0;c<X2.length();c++){
				if(X2.charAt(c)=='1'){
					B2++;
				}
			}
 
			System.out.println(B1+" "+B2);
		}
	}
}
