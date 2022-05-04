#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
    char a[10000];
    int i,j,n,k,len;
    while(gets(a))
    {
    n=0;
    len=strlen(a);
    
    for(i=len-1;i>=0;i--)
         {
         if(a[i]>111 && a[i]<123)
         n++;
         
         else if (a[i]=='C' || a[i]=='D' || a[i]=='E' || a[i]=='I')
            {
            if(n>=2)
            n--;
            else
             {n=0;
            break;}
            }
            
         else if(a[i]=='N')
             {
             if(n<1)
               {
               n=0;
               break;
               }
               else
               n=n;
             }
         }
         if(n==1)
           printf("YES\n");
         else
           printf("NO\n");
    }
    
}

/*
This problem its not that much easy as it looks. For this problem I am giving here an Algorithm, afterwards I will explain it.

n = 0 // a variable containing total sentence, initialized as ZERO.
bank[1000] // here the given line will be stored
len = length of [bank]

for i = len - 1 down to 0 {
  if bank[i] == any character between p through z
    n = n+1
  else if bank[i] == any character from C,D,E,I
    if n > = 2
      n = n - 1
    else
      n = 0
      break
  else if bank[i] == character N
    if n < 1
      n = 0
      break
    else
      n = n // no change in 'n'
}

After completing the FOR loop.....

if n == 1
  Print YES
else
  Print NO
     
Now I am describing how does this algorithm work.

1. Any character from p to z is a correct sentence. So, when we get any of them we just increase the total sentence (n).
2. Two correct sentences and any one of C,D,I,E make a correct sentence. But this time at first our sentence number decrease two.
                        n = n -2                               
But with C,D,I,E it makes a new sentence. So,
                        n = n + 1
So, finally we get,
                        n = n - 2 + 1
                        n = n - 1
3. One correct sentence and N make a new sentence. Here also at first total sentence decrease one but then it increase again one. As a result there is no change in 'n'.
4. If we get less than two sentence before C,D,E & I, we just break the loop with assigning 0 at n. Finally it will work as flag. You may notice that we do not break the loop if we get more than two correct sentence. This is because to make with [C...I] we need two sentence and the extras are might be for some other parts. If not then we can track it later. But we can not consider less then two.
5. Same explanation goes for N also.
6. But...finally we must get one and only one correct sentence to tell that its is correct. If we don't get n = 1, then we can surely say that its not a correct sentence.
*/
