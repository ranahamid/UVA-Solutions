import java.math.BigInteger;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;


class Main
{
	BigInteger f(BigInteger n)
	{
		return n;
	}
	public static void main (String[] args) throws IOException 
		{
        String st1;
        InputStreamReader in=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(in);
       
        Scanner sc=new Scanner(System.in);
   
  
       
             	BigInteger n=sc.nextBigInteger();
             
             	String st2="3";
             	String st3="1";
             	String st4="2";
             	
             	BigInteger c=new BigInteger(st2);
             	BigInteger one=new BigInteger(st3);
             	BigInteger two=new BigInteger(st4);
             	
             	//f(n) = 3 * f(n-1) - f(n-2)
             //	BigInteger d=c.multiply(n.subtract(one));
            // 	BigInteger b=d.add( n.subtract(two));
             	
                System.out.println("n.subtract(two) : "+n.subtract(two));
             
             	System.out.println(b);
             
        }
}