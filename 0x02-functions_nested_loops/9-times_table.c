#include "holberton.h"
/**
 * times_table - prints the 9 table
 *
 * Description: prints all the nine table
 * Return: Always(0) Success
 */
void times_table(void)
{
	int result;
	int step;
	int start;
	int end;
	int x;

	x = 0;
	step = 0;
	end = 9;


	do {

		for (start = 0; start <= end; start++)
		{
			result = start * step;
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');

			if (start == 9)
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

	} while (x <= 9);
}
