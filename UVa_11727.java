//UVa 11727

import java.io.*;
import java.util.*;
 
class Main {
 
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int number;
		number=cin.nextInt();
		
		for(int a=1;a<=number;a++){
			int salary1,salary2,salary3;
			salary1=cin.nextInt();
			salary2=cin.nextInt();
			salary3=cin.nextInt();
			
			if(salary1<salary2&&salary2<salary3){
				System.out.println("Case "+a+": "+salary2);
			}
			if(salary3<salary2&&salary2<salary1){
				System.out.println("Case "+a+": "+salary2);
			}
			if(salary1<salary3&&salary3<salary2){
				System.out.println("Case "+a+": "+salary3);
			}
			if(salary2<salary3&&salary3<salary1){
				System.out.println("Case "+a+": "+salary3);
			}
			if(salary2<salary1&&salary1<salary3){
				System.out.println("Case "+a+": "+salary1);
			}
			if(salary3<salary1&&salary1<salary2){
				System.out.println("Case "+a+": "+salary1);
			}
		}
	}
}
