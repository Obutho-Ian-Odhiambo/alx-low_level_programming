#include "holberton.h"
/**
 * factorial - returns factorial of n
 * @n: factorial number
 *
 * Description: returns factorial of n
 * Return: Always(0) Success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	else if (n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
