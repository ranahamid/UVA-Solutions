#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int p,q,r,s,i,j;
    while(cin>>p>>q>>r>>s)
      {
      double ans=1.0;
      for(i=1,j=1;i<=q||j<=s;) //check this
         {
           if(i<=q)
             {  
             ans=ans*(p+1-i)/i;//check this
             i++;
             }
           if(j<=s)
            {
            ans=ans*j/(r+1-j);
            j++;
            }
            
         }
      printf("%.5lf\n",ans);
      }
}
