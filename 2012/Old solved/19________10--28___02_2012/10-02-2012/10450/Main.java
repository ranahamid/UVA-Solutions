//10450

import java.io.IOException;
import java.math.BigInteger;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.Scanner;

public class Main
{
   
   
	
	public static void main (String[] args) throws IOException
		{
			BigInteger a[]=new BigInteger[1501];
			
			a[0]=BigInteger.ZERO;
		    a[1]= BigInteger.ONE;
		
		for(int i=2;i<60;i++)
			 a[i]=a[i-1].add(a[i-2]);
			 
			 
        Scanner sc=new Scanner(System.in);
        int n,kase=0;
        
            n=sc.nextInt();
            for(int i=1;i<=n;i++)
            {
             int num=sc.nextInt();
             num=num+2;
            System.out.println("Scenario #"+(++kase)+":");
             System.out.println(a[num]);
               System.out.println();
            
            }
        }   
}