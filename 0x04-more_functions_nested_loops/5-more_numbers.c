#include "holberton.h"
/**
 * more_numbers - Prints a list of numbers
 *
 * Description: The numbers are all single digits
 * Return: Always(0) Success
 */
void more_numbers(void)
{
	char num;
	int count;

	count = 1;

	while (count <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar(num + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		count += 1;
		_putchar('\n');
	}
}
