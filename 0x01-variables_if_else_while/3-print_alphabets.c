#include <stdlib.h>
#include <stdio.h>

/**
 * main prints a sequence of alphabets *
 * return - Always (0) Success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
