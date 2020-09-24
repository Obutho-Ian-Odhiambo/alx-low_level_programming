#include "holberton.h"
/**
 * print_triangle - Prints a list of # triangle
 * @size: first parameter
 *
 * Description: The triangle depend on input
 * Return: Always(0) Success
 */
void print_triangle(int size)
{
	int num;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= size; num++)
		{
			if (num <= size)
			{
				for (space = 1; space <= num; space++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
