#include <stdio.h>
/**
 * main - prints fibonnaci numbers
 *
 * Description: prints from 1 to 98
 * Return: Always(0) Success
 */
int main(void)
{
	int f1 = 0, f2 = 1, i, n;
	int next, start;

	start = 1;
	n = 98;

	while (start <= n)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d, ", f2);
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
		printf("\n");
		start += 1;
	}
	return (0);
}
