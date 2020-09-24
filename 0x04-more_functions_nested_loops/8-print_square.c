#include "holberton.h"
/**
 * print_square - Prints a list of #
 * @size: first parameter
 *
 * Description: The # depend in input
 * Return: Always(0) Success
 */
void print_square(int size)
{
	int num;
	int x;

	x = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		do 
		{
			for (num = 1; num <= size; num++)
				_putchar('#');
			x += 1;
			_putchar('\n');
		}
		while (x <= size);
	}
}
