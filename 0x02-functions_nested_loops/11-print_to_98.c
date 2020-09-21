#include "holberton.h"
/**
 * main - 
 *
 * Description: 
 * Return: Always(0) Success
 */
void print_to_98(int n)
{
	int end;

	end = 98;

	if (n < end)
	{
		for (; n <= end; n++)
		{
			if (n == 98)
			{
				_putchar((n/10) + '0');
				_putchar((n%10) + '0');
				break;
			} else {
				_putchar((n/10) + '0');
				_putchar((n%10) + '0');
				_putchar(',');
				_putchar(' ');
			}

		}

		_putchar('\n');

	} else if (n == 0)
	{
		_putchar((n/10) + '0');
		_putchar((n%10) + '0');
		_putchar('\n');
	} else
	{
		for (; n >= end; n--)
		{
			if (n == 98)
			{
				_putchar((n/10) + '0');
				_putchar((n%10) + '0');
				break;
			} else {
				_putchar((n/10) + '0');
				_putchar((n%10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	return;
}
