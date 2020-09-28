#include "holberton.h"
/**
 * puts_half - splits string into 2
 * @str: first parameter
 *
 * Description: even and odd differ in output
 * Return: Always(0) Success
 */
void puts_half(char *str)
{
	int i, len, start;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i;
	}

	len = len + 1;

	if (len % 2 == 0)
	{
		for (start = (len / 2); start <= len; start++)
		{
			_putchar(str[start]);
		}
	}
	else
	{
		for (start = ((len - 1) / 2); start <= len; start++)
		{
			_putchar(str[start]);
		}
	}
	_putchar('\n');
}
