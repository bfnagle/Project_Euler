#include <stdio.h>
/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

void sieve(int *primeArray,int limit);

long main()	{
	long long sum=0;
	const int limit=2000000;
	int primeArray[limit];
	int i;
	
	for (i=0;i<limit;i++)	{
		primeArray[i]=i;
	}
	
	sieve(primeArray,limit);
	
	for(i=0;i<limit;i++)	{
		sum+=primeArray[i];
	}
	
	printf("%ld\n",sum);
	return sum;
}

void sieve(int *primeArray,int limit)	{
	int num=2;
	primeArray[1]=0;
	int i;
	
	while((num*num)<limit)	{
		for(i=0;i<limit;i+=num)	{
			if(primeArray[i]!=0&&primeArray[i]!=num)	{
				primeArray[i]=0;
			}
		}
		if(num==2)	{
			num++;
		}	else{
			num+=2;
		}
	}
}