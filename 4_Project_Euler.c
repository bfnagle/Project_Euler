#include <stdio.h>
#include <math.h>

/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

long main()	{
	int palindrome=0;
	int i=100;
	int j=100;
	int max=999;
	for (i=100;i<=max;i++)	{
		for (j=100;j<=max;j++)	{
			int result=i*j;
			if (palinCheck(result))	{
				if(result>palindrome)	{
					palindrome=result;
				}
			}
		}
	}
	printf("%d",palindrome);
	return palindrome;
}

int palinCheck(int num)	{
	int tmp=num;
	int n=0;
	while (tmp>0)	{
		n++;
		tmp=tmp/10;
	}
	int k=0;
	int m=n-1;
	for (k=0;k<=m;k++)	{
		int tmp1=(int)(num/pow(10,(double)k))%10;
		int tmp2=(int)(num/pow(10,(double)m))%10;
		if (tmp1!=tmp2)	{
			return 0;
		}
		m--;
	}
	return 1;
}