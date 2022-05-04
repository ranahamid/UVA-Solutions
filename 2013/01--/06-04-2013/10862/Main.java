//10862

import java.io.IOException;
import java.math.BigInteger;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.Scanner;

public class Main
{
   
   
	
	public static void main (String[] args) throws IOException
		{
			BigInteger a[]=new BigInteger[4100];
			
			a[0]=BigInteger.ZERO;
		    a[1]= BigInteger.ONE;
		
		for(int i=2;i<4010;i++)
			 a[i]=a[i-1].add(a[i-2]);
			 
			 
        Scanner sc=new Scanner(System.in);
        int n,kase=0,num;
        
            num=sc.nextInt();
            while(num!=0)
            {
             num=2*num;
             System.out.println(a[num]);
             num=sc.nextInt();
            }
        }   
}