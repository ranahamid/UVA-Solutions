//10733

import java.io.IOException;
import java.math.BigInteger;
import java.io.InputStreamReader;
import java.io.BufferedReader;

class Main
{
	public static void main (String[] args) throws IOException
		{
        String st;
        InputStreamReader in=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(in);
        st=br.readLine();
       	

        
        while(!st.equals("0"))
            {
            BigInteger n=new BigInteger(st);
            
            	
        	BigInteger a=n.pow(6);	
        	BigInteger b=BigInteger.valueOf(3).multiply((n.pow(4)));	
        	BigInteger c=BigInteger.valueOf(12).multiply((n.pow(3)));	
        	BigInteger d=BigInteger.valueOf(8).multiply((n.pow(2)));	
        	BigInteger e=a.add(b);
        	BigInteger f=e.add(c);
        	BigInteger g=f.add(d);
        	BigInteger ans=g.divide(BigInteger.valueOf(24));	
        	//n^6+3n^4+12n^3+8n^2)/24.
	     	System.out.println(ans);
	     	st=br.readLine();
            }
          
        }
}