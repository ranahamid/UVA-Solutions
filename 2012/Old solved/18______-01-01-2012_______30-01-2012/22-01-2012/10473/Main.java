//10473

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main
{
	public static void main (String[] args) throws IOException
		{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String st;
        while((st=br.readLine())!=null)
           {
        	if(!st.contains("x"))
        	  {
        	  if(Double.valueOf(st)<0)
        	  	   break;
        	  else
           	   System.out.println("0x"+Integer.toHexString(Integer.valueOf(st)).toUpperCase());
        	  }
           else
           	   System.out.println(Integer.decode(st));
           }
       }
}