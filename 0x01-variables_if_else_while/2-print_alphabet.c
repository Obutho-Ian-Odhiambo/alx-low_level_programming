#include <stdlib.h>
#include <stdio.h>

/**
 * main prints a sequence of alphabets in lower case
 *
 * return - Always (0) Success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
