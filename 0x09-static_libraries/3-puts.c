#include "holberton.h"
/**
 * _puts - prints a string
 * @str: first parameter
 *
 * Description: prints a string
 * Return: Always(0) Success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
