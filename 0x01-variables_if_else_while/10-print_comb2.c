#include <stdio.h>

/**
 * main - prints all combinations 0 to 9 in twos
 *
 * return - Always(0) Success
 *
 */
int main(void)
{
	int lower;
	int upper;
	int lower2;
	int upper2;

	upper = 9;
	upper2 = 9;

	for (lower = 0; lower <= upper; lower++)
	{
		for (lower2 = 0; lower2 <= upper2; lower2++)
		{
			putchar(lower + '0');
			putchar(lower2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
