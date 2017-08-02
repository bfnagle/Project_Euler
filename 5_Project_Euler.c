#include <stdio.h>
#include <math.h>

/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
unsigned int stepSize(unsigned int max);
unsigned int isPrime(unsigned int num);

unsigned int main ()	{
	unsigned int max=20;
	unsigned int found=0;
	unsigned int step=stepSize(max);
	unsigned int smallest=step;
	while (!found)	{
		found=1;
		unsigned int i;
		for (i=1;i<=max;i++)	{
			if (smallest%i!=0)	{
				found=0;
				smallest+=step;
				break;
			}
		}
	}
	printf("%d\n",smallest);
	return smallest;
}

unsigned int stepSize(unsigned int max)	{
	unsigned int stepSize=1;
	unsigned int i;
	for (i=max;i>0;i--)	{
		if (isPrime(i)&&stepSize%i!=0)	{
			stepSize*=i;
		}
	}
	return stepSize;
}

unsigned int isPrime(unsigned int num)	{
	unsigned int i;
	for (i=2;(double)i<=sqrt((double)num);i++)	{
		if (num%i==0)	{
			return 0;
		}
	}
	return 1;
}