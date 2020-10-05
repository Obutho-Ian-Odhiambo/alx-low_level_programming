#include "holberton.h"
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

	for (i = 0; i <= 7; i++)
	{
		_putchar(*(a[i]) + 5);
	}
}
