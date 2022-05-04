long long  bigmod(long long  b,long long e,long long  m) 
{
long long  res = 1;
	    while(e)
	    {
	        if(e&1)
	            res = (res*b)%m;
	        e>>=1;
	        b = (b*b)%m;
	    }
	    return res;
}
