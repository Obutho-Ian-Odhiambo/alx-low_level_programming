#include "holberton.h"
/**
 * reset_to_98 - resets the pointer value
 * @n: first parameter
 *
 * Description: resets value of n
 * Return: Always(0) Success
 */
void reset_to_98(int *n)
{
	int *q;
	int x = 98;

	q = &x;
	*n = *q;
}
