#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard
 * @a: 2d array
 *
 * Description: prints a 2d board
 * Return: Always(0) Success
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	j = 0;

	while (j < 8)
	{
		for (i = 0; i <= 20; i++)
		{
			_putchar(*(a[i]));
		}
		j = 0;
		j++;
	}
	_putchar('\n');

}
