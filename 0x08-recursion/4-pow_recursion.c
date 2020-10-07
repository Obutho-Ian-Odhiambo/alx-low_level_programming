#include "holberton.h"
/**
 * _pow_recursion - returns x raised to y
 * @x: first parameter
 * @y: second parameter
 *
 * Description: uses recursion
 * Return: Always(0) Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
