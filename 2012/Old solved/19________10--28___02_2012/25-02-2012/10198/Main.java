//10198

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
	public static void main (String[] args) 
	{
	BigInteger res[]=new BigInteger[1001];
	res[0]=BigInteger.ZERO;
	res[1]=new BigInteger("2");
	res[2]=new BigInteger("5");
	res[3]=new BigInteger("13");
	for(int i=4;i<res.length;i++)
	  {
	   res[i]=res[i-1].multiply(new BigInteger("2")).add(res[i-2]).add(res[i-3]);
	  }
	 Scanner sc=new Scanner(System.in);
	 while(sc.hasNext())
	   {
	   System.out.println(res[sc.nextInt()]);
	   }
	}
}