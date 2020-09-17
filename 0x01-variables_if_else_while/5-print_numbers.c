#include <stdio.h>
/**
 * main - prints num from 0 to 9
 *
 * return - Always(0) Success
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	putchar('\n');
	return (0);
}
