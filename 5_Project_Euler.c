#include <stdio.h>

/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main ()	{
	int max=20;
	int smallest=max;
	int i=1;
	int found=0;
	while (!found)	{
		found=1;
		for (i=1;i<max;i++)	{
			if (smallest%i!=0)	{
				found=0;
				smallest++;
				break;
			}
		}
	}
	printf("%d",smallest);
	return smallest;
}
