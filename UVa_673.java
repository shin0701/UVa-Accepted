//UVa 673

import java.io.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); //建立輸入處理物件
		int number=cin.nextInt();
		
		for(int a=0;a<number+1;a++){
			int top=0;
			char stack[]=new char [1000];
			String input=cin.nextLine();
			boolean check=true;
			
			if(a>0){
				for(int b=0;b<input.length();b++){
					if(input.charAt(b)=='('||input.charAt(b)=='['){
						stack[top]=input.charAt(b);
						top++;
					}
					if(top>0&&check==true){
						if(input.charAt(b)==')'&&stack[top-1]=='('&&check==true){
							check=true;
							top--;
						}
						else if(input.charAt(b)==')'&&stack[top-1]!='('){
							check=false;
						}
						else if(input.charAt(b)==']'&&stack[top-1]=='['&&check==true){
							check=true;
							top--;
						}
						else if(input.charAt(b)==']'&&stack[top-1]!='['){
							check=false;
						}
					}
					else if(top==0&&input.charAt(b)==')'&&check==true){
						check=false;
					}
					else if(top==0&&input.charAt(b)==']'&&check==true){
						check=false;
					}
				}
				if(top!=0){
					check=false;
				}
				
				if(check==false){
					System.out.println("No");
				}
				else{
					System.out.println("Yes");
				}
			}
		}
	}
}
