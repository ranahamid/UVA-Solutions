//10519

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.math.BigInteger;
import java.io.IOException;

public class Main
{
    
    public static void main(String[] args) throws IOException
    {
    String st1,st2,st3;
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    
    while((st1=br.readLine())!=null)	
       {
       //n*n - n + 2
       BigInteger n=new BigInteger(st1);
       BigInteger a=n.pow(2);
	   BigInteger b=a.subtract(n);
	   BigInteger ans=b.add(BigInteger.valueOf(2));
       System.out.println(ans);
       }
    }
}
