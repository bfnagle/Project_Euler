#include <stdio.h>

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

int main ()	{
	int sum=0;
	int first=3;
	int second=5;
	int limit=1000;
	
	int i=0;
	for (i=0;i<limit;i++)	{
		if (i%first==0 || i%second==0)	{
			sum+=i;
		}
	}
	printf("%d",sum);
	return sum;
}