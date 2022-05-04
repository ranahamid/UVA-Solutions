#include <iostream>

#include<stdio.h>

	using namespace std;
	 
	int is_prime (int x) 
    {
	    for (int i = 2; i * i <= x; i++)
         {
	        if (x % i == 0)
	            return 0;
	    }
	    return 1;
	}
	 
int main ()
	{
	    int n, test;
	    cin >> test;
	 
	    while (test--) 
        {
	        cin >> n;
	        int k = n / 2 + 1;
	        while (1) 
            {
	            if (is_prime (k)) 
                {
	                printf("%d\n", k);
	                break;
	            }
	            k++;
	        }
	    }
	    return 0;
	}
