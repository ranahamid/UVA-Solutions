//10814
import java.math.BigInteger;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;

class Main
{
	public static void main (String[] args) throws IOException 
		{
       
       
        int test;
        Scanner sc=new Scanner(System.in);
        test=Integer.parseInt(sc.nextLine());
        
        while(test--!=0)
             {
             	String[] big=sc.nextLine().split(" ");
             	BigInteger a=new BigInteger(big[0]);
 
             	BigInteger b=new BigInteger(big[2]);
             	
             	BigInteger c=a.gcd(b);
             	System.out.println((a.divide(c))+" / "+(b.divide(c)));
             }
        }
}