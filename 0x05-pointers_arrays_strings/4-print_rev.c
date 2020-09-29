#include "holberton.h"
/**
 * print_rev - prints string in reverse
 * @s: first parameter
 *
 * Description: reverse order
 * Return: Always(0) Success
 */
void print_rev(char *s)
{

	int i, len, start;

	len = 0;
	start = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	len = len + 1;

	for (; len >= start; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
