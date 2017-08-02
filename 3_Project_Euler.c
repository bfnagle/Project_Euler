#include <stdio.h>
#include <math.h>
/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

long main ()	{
	long long num=600851475143;
	long long max=1;
	long long i=1;		
	for (i=1;(double)i<=sqrt((double)num);i++)	{
		if (num%i==0)	{
			int pair=num/i;
			if (isPrime(pair))	{
				max=pair;
				printf("%d",max);
				return max;
			}	else if (isPrime(i))	{
				max=i;
			}
		}
	}
	printf("%d",max);
	return max;
}

/*Function to calculate whether or not a number is prime*/
int isPrime(long long num)	{
	long long i=2;
	for (i=2;(double)i<=sqrt((double)num);i++)	{
		if (num%i==0)	{
			return 0;
		}
	}
	return 1;
}