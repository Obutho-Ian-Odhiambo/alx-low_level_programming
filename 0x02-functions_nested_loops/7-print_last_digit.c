#include "holberton.h"
/**
 * print_last_digit - prints the lest digit
 * @c: first parameter
 *
 * Description: prints the last digit
 * Return: Always(0) Success
 */
int print_last_digit(int c)
{
	int d;

	d = c % 10;

	if (d < 0)
		d *= -1;

	_putchar(d  + '0');
	return (d);
}
