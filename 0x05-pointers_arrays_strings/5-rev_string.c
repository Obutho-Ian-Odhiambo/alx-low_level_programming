#include "holberton.h"
/**
 * rev_string - prints string in reverse
 * @s: first parameter
 *
 * Description: reverse order
 * Return: Always(0) Success
 */
void rev_string(char *s)
{

	int i, len, start;

	len = 0;
	start = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}

	for (; len >= start; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
