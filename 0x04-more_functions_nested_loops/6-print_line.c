#include "holberton.h"
/**
 * print_line - Prints a list of underscores
 * @n: first parameter
 *
 * Description: The underscores depend in input
 * Return: Always(0) Success
 */
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
			_putchar('_');
	}
	_putchar('\n');
}
