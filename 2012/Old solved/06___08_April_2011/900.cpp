#include<stdio.h>
int fibon(int n)
{
    int i;
    int fib[100]={0};
    fib[0]=1;
    fib[1]=1;
    for(i=2;i<=n;i++)
    {
    fib[i]=fib[i-2]+fib[i-1];
    }
    return fib[n];
}
int main()
{
    int n,ans;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
    else
        {
            ans=fibon(n);
            printf("%d\n",ans);
        }
    }
}


/*
if time limit execcds then
#include <stdio.h>
char * fib[] = {"1","2","3","5","8","13","21","34","55","89","144","233","377","610","987","1597",
"2584","4181","6765","10946","17711","28657","46368","75025","121393","196418","317811","514229",
"832040","1346269","2178309","3524578","5702887","9227465","14930352","24157817","39088169","63245986"
,"102334155","165580141","267914296","433494437","701408733","1134903170","1836311903","2971215073",
"4807526976","7778742049","12586269025","20365011074"};
int main() {
	int n;
	while(1) {
		scanf("%d",&n);
		if(!n) break;
		puts(fib[n-1]);
	}
}
*/
