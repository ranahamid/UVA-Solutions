import java.math.BigInteger;
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main 
{
	public static void main (String[] args) throws IOException
	{
    	
     Scanner sc=new Scanner(System.in);
     BigInteger a,c;
     int b;
     a=sc.nextBigInteger();
     b=sc.nextInt();
     String s=a.toString();
    while(b!=0 || (!s.equals("0")))	
      {
 
      c=a.pow(b);
      System.out.println(c);
     
      a=sc.nextBigInteger();
      b=sc.nextInt();
      s=s =a.toString();
      
      }
      
    	
    }
}