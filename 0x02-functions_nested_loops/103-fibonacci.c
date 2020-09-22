#include <stdio.h>

/**
 * main - prints the sum of fibonnaci
 *
 * Description: numbers are below 4000000
 * Return: Always(0) Success
 */
int main(void)
{
	int f1 = 0, f2 = 1, i, n;
	int next, sum;

	n = 50;
	sum = 0;

	for (i = 1; i <= n; i++)
	{
		if (i == 50)
		{
			/* printf("%d", f2);*/
		} else
		{
			/* printf("%d, ", f2);*/
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}

		if (f2 <= 4000000)
		{
			if (f2 % 2 == 0)
				sum = sum + f2;
			else
				continue;
		}
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
