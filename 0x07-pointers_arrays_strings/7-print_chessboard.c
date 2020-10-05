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
	char *ca = (char *)a;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((char) *((ca + i * 8) + j));
		}
		_putchar('\n');
	}

}
