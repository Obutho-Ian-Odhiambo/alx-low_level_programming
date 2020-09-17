#include <stdlib.h>
#include <stdio.h>

/**
 * main prints a sequence of alphabets in lower case ! q e
 *
 * return - Always (0) Success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
