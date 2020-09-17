#include <stdio.h>

/**
 * main - prints all combinations 0 to 9
 *
 * return - Always(0) Success
 *
 */
int main(void)
{
	int lower;
	int upper;

	upper = 9;

	for (lower = 0; lower <= upper; lower++)
	{
		putchar(lower + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
