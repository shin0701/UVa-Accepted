//UVa 575
import java.io.*;
import java.util.*;

class Main {
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); //建立輸入處理物件
		String number=cin.next();
		
		while(true){
			int skew=0;
			int count=0;
			
			for(int a=number.length();a>0;a--){
				skew+=(number.charAt(count)-48)*(Math.pow(2,a)-1);
				count++;
			}
			System.out.println(skew);
			
			number=cin.next();
			if(number.compareTo("0")==0){
				break;
			}
				
		}
	}
}
