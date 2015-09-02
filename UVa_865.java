//UVa 865
import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); //建立輸入處理物件
		int N=cin.nextInt();
		String input=cin.nextLine();
		
		input=cin.nextLine();
		for(int a=0;a<N;a++){
			String before=cin.nextLine();
			String after=cin.nextLine();
			
			if(a>0){
				System.out.println();
			}
			System.out.println(after+"\n"+before);
			
			input=cin.nextLine();
			while(!"".equals(input)){
				int index=-1;
				String text="";
				for(int b=0;b<input.length();b++){
					index=before.indexOf(input.charAt(b));
					if(index<0){
						text=text+input.charAt(b);
					}
					else{
						text=text+after.charAt(index);
					}
				}
				
				System.out.println(text);
				
				if(cin.hasNext()){
					input=cin.nextLine();
				}
				else{
					input="";
				}
			}
		}
	}
}
