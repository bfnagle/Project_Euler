#include<stdio.h>
#define LIMIT 1000000-1
/*The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.*/

long calcChain(long num,long *cache);
long calcNext(long *num);

void main()	{
	long i,j;
	long maxChain=1;
	long maxNum=1;
	long cache[LIMIT]={0};

	for (i=1;i<=LIMIT;i++)	{
		cache[i-1]=calcChain(i,cache);
		if(cache[i-1]>maxChain)	{
			maxChain=cache[i-1];
			maxNum=i;
		}
	}
	printf("Starting Number: %d; Number in Chain: %d\n",maxNum,maxChain);
	return;
}


long calcChain(long num,long *cache)	{
	long count=1;
	while(num!=1)	{
		if(num>LIMIT)	{
			count+=calcNext(&num);
		}	else if (cache[num-1]==0)	{
			count+=calcNext(&num);
		}	else{
			return (cache[num-1]+count-1);
		}
	}
	return count;
}

long calcNext(long *num)	{
	if(*num%2==0)	{
		*num/=2;
	}	else	{
		*num=(*num*3)+1;
	}
	return 1;
}