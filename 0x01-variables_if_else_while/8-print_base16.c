#include <stdio.h>

/**
 * main - prints hex in lower case
 *
 * return - Always (0) Success
 */
int main(void)
{
	char start;
	char end;

	for (start = 0; start <= 9; start++)
		putchar(start + '0');

	for (end = 'a'; end <= 'f'; end++)
		putchar(end);
	putchar('\n');
	return (0);
}
