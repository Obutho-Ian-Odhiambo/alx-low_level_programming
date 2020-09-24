#include <stdio.h>
/**
 * main - prints the largest prime of n
 *
 * Description: prints largest prime
 * Return: Always(0) Success
 */
void main(void)
{
	long long int n , i;

	n = 612852475143;

	for (i = 3; i <= n; i = i+2)
	{
		while (n % i == 0)
		{
			n = n/i;
		}
	}
	printf("%lld ", i);
}
