#include "holberton.h"
/**
 * print_times_table - prints the 9 table
 * @n: first parameter
 *
 * Description: prints all the nine table
 * Return: Always(0) Success
 */
void print_times_table(int n)
{
	int result;
	int step;
	int start;
	int x;

	x = 0;
	step = 0;

	if ((n > 15) || (n < 0))
	{
		return;
	}
	else
	{
		do {

			for (start = 0; start <= n; start++)
			{
				result = start * step;
				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if ((result >= 10) && (result <= 99))
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				if (start == n)
				{
					break;
				} else
				{
					_putchar(',');
					_putchar(' ');

				}

			}
			_putchar('\n');
			step += 1;
			x += 1;

		} while (x <= n);
	}
}
