#include "holberton.h"
/**
 * puts2 - prints all char % 2
 * @str: first parameter
 *
 * Description: prints multiples of 2
 * Return: Always(0) Success
 */
void puts2(char *str)
{
	int i, len, start;

	len = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		len = i;
	}

	len = len + 1;
	for (start = 0; start <= len; start++)
	{
		if (start % 2 == 0)
			_putchar(str[start]);
		else
			continue;
	}

	_putchar('\n');
}
