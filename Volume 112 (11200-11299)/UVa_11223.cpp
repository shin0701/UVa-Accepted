//UVa 11223

import java.io.*;
import java.util.*;
 
class Main {
    public static void main(String[] args) {
        HashMap<String, String> code = new HashMap<String, String>();
        code.put(".-", "A");       code.put("-...", "B");     code.put("-.-.", "C");
        code.put("-..", "D");      code.put(".", "E");        code.put("..-.", "F");
        code.put("--.", "G");      code.put("....", "H");     code.put("..", "I");
        code.put(".---", "J");     code.put("-.-", "K");      code.put(".-..", "L");
        code.put("--", "M");       code.put("-.", "N");       code.put("---", "O");
        code.put(".--.", "P");     code.put("--.-", "Q");     code.put(".-.", "R");
        code.put("...", "S");      code.put("-", "T");        code.put("..-", "U");
        code.put("...-", "V");     code.put(".--", "W");      code.put("-..-", "X");
        code.put("-.--", "Y");     code.put("--..", "Z");     code.put("-----", "0");
        code.put(".----", "1");    code.put("..---", "2");    code.put("...--", "3");
        code.put("....-", "4");    code.put(".....", "5");    code.put("-....", "6");
        code.put("--...", "7");    code.put("---..", "8");    code.put("----.", "9");
        code.put(".-.-.-", ".");   code.put("--..--", ",");   code.put("..--..", "?");
        code.put(".----.", "\'");  code.put("-.-.--", "!");   code.put("-..-.", "/");
        code.put("-.--.", "(");    code.put("-.--.-", ")");   code.put(".-...", "&");
        code.put("---...", ":");   code.put("-.-.-.", ";");   code.put("-...-", "=");
        code.put(".-.-.", "+");    code.put("-....-", "-");   code.put("..--.-", "_");
        code.put(".-..-.", "\"");  code.put(".--.-.", "@");
        
        Scanner cin = new Scanner(System.in);
        
        while(cin.hasNext()){            
            int T=cin.nextInt();
            
            for(int a=0;a<T;a++){
                String input=cin.nextLine();
                if("".equals(input)){
                    a--;
                    continue;
                }
                
                input=input.replaceAll("  ", "!*!").replaceAll(" ", "!").replaceAll("!!", "!");
                
                
                
                String[] token=input.split("!");
                
                if(a>0){
                    System.out.println();
                }
                System.out.println("Message #"+(a+1));
                
                String output="";
                boolean first=true;
                for(int b=0;b<token.length;b++){
                    if(!"*".equals(token[b])&&null!=code.get(token[b])){
                        output+=code.get(token[b]);
                        first=false;
                    }
                    else{
                        if(first==false&&!"*".equals(token[b-1])){
                            output+=" ";
                        }
                    }
                }
                System.out.println(output);
            }
        }
    }
}
