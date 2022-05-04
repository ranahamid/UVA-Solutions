//424

import java.io.IOException;
import java.math.BigInteger;
import java.io.InputStreamReader;
import java.io.BufferedReader;

class Main
{
	public static void main (String[] args) throws IOException
		{
        String st="";
        InputStreamReader in=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(in);
        st=br.readLine();
        BigInteger sum= BigInteger.ZERO;
        	
        
        while(!st.equals("0"))
            {
        	sum=sum.add(new BigInteger(st));
        	st=br.readLine();    
            }
          System.out.println(sum);
        }
}