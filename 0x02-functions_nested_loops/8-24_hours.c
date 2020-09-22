#include "holberton.h"
/**
 * jack_bauer - prints time
 *
 * Description: prints a list of time
 * Return: Always(0) Success
 */
void jack_bauer(void)
{
	int max;
	int x;
	int zero;

	zero = 0;

	max = 59;


	for (x = 0; x <= max; x++)
	{
		if (x <= 9)
		{
			_putchar(zero + '0');
			_putchar(zero + '0');
			_putchar(';');
			_putchar(zero + '0');
			_putchar(x + '0');
			_putchar('\n');

		} else
		{
			_putchar(zero + '0');
			_putchar(zero + '0');
			_putchar(':');
			_putchar(x + '0');
			_putchar('\n');
		}

	}


	return (0);
}
