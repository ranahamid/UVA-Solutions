//10190
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;
int main()
{
 
    int i,j;
    int m,n;
    while(cin>>n>>m)
    {
    vector<int>v;
    if(m<2|| n<2|| m>n)
      {
      cout<<"Boring!"<<endl;
       continue;
       }
    int flag=0;
    while(n>1)
       {
              if(n%m==0)
               {
               v.push_back(n);
               n=n/m;
               }
               else
                 {
                 flag=1;
                 break;
                 }
       }
    v.push_back(1);
    if(flag)
        cout<<"Boring!"<<endl;
    else
       {
        bool space = false;
	            for ( size_t i = 0; i < v.size (); i++ )
                {
	                if ( space )
                        printf (" "); 
                 space = true;
	                printf ("%d", v [i]);
                 }
	            printf ("\n");
       }
    }
}
