#include "holberton.h"
/**
 * swap_int - swaps two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Description: uses pointers
 * Return: Always(0) Success
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
