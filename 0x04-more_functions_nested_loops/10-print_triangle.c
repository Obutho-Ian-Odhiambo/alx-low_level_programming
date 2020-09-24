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

	int i, j;


	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
