#include "holberton.h"
/**
 * _abs - prints te absolute value
 * @x: first parameter
 *
 * Description: prints absolute value
 * Return: Always(0) Success
 */
int _abs(int x)
{
	if (x < 0)
		return (x *= -1);

	else if (x == 0)
		return (x += 0);

	else
		return (x -= 0);

	return (0);
}
