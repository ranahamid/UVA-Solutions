//10106

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
       st2=br.readLine();
       BigInteger a=new BigInteger(st1);
       BigInteger b=new BigInteger(st2);

       System.out.println(a.multiply(b));
       }
    }
}
