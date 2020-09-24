#include <stdio.h>
/**
 * main - prints the largest prime of n
 *
 * Description: prints largest prime
 * Return: Always(0) Success
 */
int main(void)
{
	int n, i, d;

	d = 50829601;

	n = 143;

	for (i = 3; i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%d", d);
	printf("\n");
	return (0);
}
