//11448

import java.math.BigInteger;
import java.util.Scanner;

public class Main 
{
    
    public static void main(String[] args) 
    	{
    	
    	Scanner sc=new Scanner(System.in);
    	int test=sc.nextInt();
    	for(int i=0;i<test;i++)
    	    {
    	     BigInteger a=sc.nextBigInteger();
    	     BigInteger b=sc.nextBigInteger();
    	     
    	     System.out.println(a.subtract(b));
    	    }
        }
}
