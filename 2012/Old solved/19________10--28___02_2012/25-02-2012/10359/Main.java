//10359

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
	public static void main (String[] args) 
	{
	BigInteger res[]=new BigInteger[251];
	res[0]=BigInteger.ONE;
	res[1]=BigInteger.ONE;

	for(int i=2;i<res.length;i++)
	  {
	   res[i]=res[i-1].add((res[i-2].multiply(new BigInteger("2"))));
	  }
	 Scanner sc=new Scanner(System.in);
	 while(sc.hasNext())
	   {
	   System.out.println(res[sc.nextInt()]);
	   }
	}
}