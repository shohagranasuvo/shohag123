import java.lang.*;

public class StringClass {
 public static void main(String[] args) {
     
 
    String name ="Shohag Rana Shuvo ";
    String st = new String("Top lvl iq");
    System.out.println(name);
    System.out.println(name.length());
    System.out.println(st);
    System.out.println(st.length());
    System.out.println(name.toLowerCase());
    System.out.println(st.toLowerCase());
    System.out.println(name.toUpperCase());
    System.out.println(st.toUpperCase());
    System.out.println("\"" + name.trim() + "\"");
    System.out.println(name.substring(12,17));
    System.out.println(name.substring(7));
    System.out.println(name.replace('S','G'));
    System.out.println(name.replace("Shuvo","Shohag Rana"));
    System.out.println(name.startsWith("Sh"));
    System.out.println(name.endsWith("Shuvo "));
    System.out.println(name.charAt(7));
    System.out.println(name.indexOf("R"));
    System.out.println(name.indexOf("o",10));
    System.out.println(name.equals("Shohag"));
    System.out.println(name.equalsIgnoreCase("Shohag Rana ShUvo "));
    
}}
