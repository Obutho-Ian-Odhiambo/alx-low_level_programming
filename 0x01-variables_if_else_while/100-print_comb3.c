#include <stdio.h>
/**
 * main - prints a list of double didgits
 *
 * Description: digits should not be repeated twice
 * Return: Always(0) Success
 */
int main(void)
{
	int lower;
	int lower2;
	int upper;
	int upper2;
	int step = 0;


	upper = 9;
	upper2 = 9;


	for (lower = 0; lower <= upper; lower++)
	{

		for (lower2 = (1 + step); lower2 <= upper2; lower2 += 1)
		{
			putchar(lower + '0');
			putchar(lower2 + '0');
			putchar(',');
		}

		step += 1;

	}

	putchar('\n');

	return (0);
}
