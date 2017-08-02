#include <stdio.h>
#include <math.h>

/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main()	{
	int product=0;
	double a,b,c;
	int max=998;
	double goal=1000;
	
	for(a=1;a<=max;a++)	{
		for(b=1;b<=max;b++)	{
			c=sqrt(a*a+b*b);
			if(goal==(a+b+c))	{
				product=a*b*c;
				break;
			}
		}
		if (product!=0)	{
			break;
		}
	}
	
	printf("%d\n",product);
	return product;
}