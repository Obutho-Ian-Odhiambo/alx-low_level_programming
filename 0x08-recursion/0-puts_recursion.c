#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: first parameter
 *
 * Description: prints a string, followed by a new line
 * Return: Always(0) Success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
