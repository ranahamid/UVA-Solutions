#include<iostream>
#include<stdio.h>
#define max 1000001
using namespace std;

int n,c[max],prime[max],i,j;

void prime1()
{
for(i=0;i<max;i++)
  {
  c[i]=0;
  prime[i]=1;
  }
  
 for(int i = 2; i < max; i++)
	    {
	        if(prime[i] == 1)
	        {
	            for(int j = i * 2; j < max; j+=i)
	            {
	                prime[j] = 0;
	                c[j]++;
	            }
	            c[i] = 1;
	        }
	    }
}

int main()
{
 prime1();
while(cin>>n,n)

  {
  printf("%d : %d\n",n,c[n]);
  }

}
