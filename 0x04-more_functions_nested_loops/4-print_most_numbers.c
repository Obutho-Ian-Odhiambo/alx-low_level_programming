#include "holberton.h"
/**
 * print_most_numbers - Prints a list of numbers
 *
 * Description: The numbers are all single digits
 * Return: Always(0) Success
 */
void print_most_numbers(void)
{
	char num;

	for (num = 0; num <= 9; num++)
		if ((num == 2) || (num == 4))
			continue;
		else
			_putchar(num + '0');

	_putchar('\n');
}
