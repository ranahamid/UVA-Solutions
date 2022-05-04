//11161
import java.io.IOException;
import java.math.BigInteger;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.Scanner;


 class Main
{

	public static void main (String[] args) throws IOException
		{
         BigInteger a[]=new BigInteger[1520];
	
		a[0]=BigInteger.ZERO;
		a[1]= BigInteger.ONE;
		
		for(int i=2;i<1515;i++)
			 a[i]=a[i-1].add(a[i-2]);
			 
			 
        String st="";
        InputStreamReader in=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(in);
        int k=1;
        Scanner sc=new Scanner(System.in);
        String st1="3";
        BigInteger three=new BigInteger(st1);
        
        String st2="2";
        BigInteger two=new BigInteger(st2);
        
         
         
         st=br.readLine();

        
        while(!st.equals("0"))
            {
         
         BigInteger n=new BigInteger(st);
          
         
         BigInteger dd=n.add(three);
        // int c=Integer.valueOf(dd);
         int c=dd.intValue();  
         	 //conver big integer dd to c here..........
        
         BigInteger d=a[c];
         //System.out.println(d);
         
         BigInteger e=d.subtract(three);
        //  System.out.println(e);
         BigInteger f=e.divide(two);
         
         
         System.out.println("Set "+k+":");
         k++; 
         System.out.println(f);//(f(k+3)-3)/2. 
         st=br.readLine();
            }
        }   
}