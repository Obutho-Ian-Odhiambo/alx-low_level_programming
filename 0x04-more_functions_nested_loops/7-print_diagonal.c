#include "holberton.h"
/**
 * print_diagonal - Prints a list of back escape
 * @n: first parameter
 *
 * Description: The back escape depend on input
 * Return: Always(0) Success
 */
void print_diagonal(int n)
{
	int num;
	int space;

	if (n > 0)
	{

		for (num = 1; num <= n; num++)
		{
			if (num <= n)
			{
				for (space = 0; space < num; space++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
