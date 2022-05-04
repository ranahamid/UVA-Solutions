import java.io.IOException;
import java.math.BigInteger;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.Scanner;

public class Main
{
   
   
	
	public static void main (String[] args) throws IOException
		{
			BigInteger a[]=new BigInteger[2000];//check here
			
			a[0]=BigInteger.ZERO;
		    a[1]= BigInteger.ONE;
		
		for(int i=2;i<1001;i++)  //check here
			 a[i]=a[i-1].add(a[i-2]);


int m,n,i;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
m=sc.nextInt();
while(true)//check here
   {
   int num=1;
   for(i=1;i<=m;i++)
      num=num<<1;
  // int ans=fib[n]%num;
  BigInteger ans=a[n].remainder(BigInteger.valueOf(num));
   System.out.println(ans);
   
   n=sc.nextInt();
m=sc.nextInt();
   }
}
}
