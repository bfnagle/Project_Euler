#include <stdio.h>
#include <math.h>

/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

long main()	{
	long prime=2;
	int num=10001;
	int i=1;
	while(i<num)	{
		prime++;
		if(isPrime(prime))	{
			i++;
		}
	}
	printf("%d",prime);
	return prime;
}

/*Function to calculate whether or not a number is prime*/
int isPrime(long num)	{
	if (num==2||num==3)	{
		return 1;
	}
	long i=2;
	for (i=2;(double)i<=sqrt((double)num);i++)	{
		if (num%i==0)	{
			return 0;
		}
	}
	return 1;
}