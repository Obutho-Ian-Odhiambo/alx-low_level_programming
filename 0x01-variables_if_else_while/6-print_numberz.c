#include <stdio.h>
/**
 * main - prints num from 0 to 9
 *
 * return - Always(0) Success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');

	putchar('\n');
	return (0);
}
