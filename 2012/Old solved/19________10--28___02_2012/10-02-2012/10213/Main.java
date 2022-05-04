//10213


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
    	     BigInteger n=sc.nextBigInteger();
    	     BigInteger six=BigInteger.valueOf(6);
    	     BigInteger twenty_three=BigInteger.valueOf(23);
    	     BigInteger eighteen=BigInteger.valueOf(18);
    	     BigInteger tweenty_four=BigInteger.valueOf(24);
    	     
    	     BigInteger a=n.pow(4);
    	     BigInteger b=six.multiply((n.pow(3)));
    	     BigInteger c=twenty_three.multiply((n.pow(2)));
    	     BigInteger d=eighteen.multiply(n);
    	     BigInteger e=a.subtract(b);
    	     BigInteger f=e.add(c);
    	     BigInteger g=f.subtract(d);
    	     BigInteger h=g.add(tweenty_four);
    	     BigInteger ans=h.divide(tweenty_four);
    	     //(n^4 - 6n^3 + 23n^2 - 18n + 24) / 24
    	     
    	     System.out.println(ans);
    	    }
        }
}
