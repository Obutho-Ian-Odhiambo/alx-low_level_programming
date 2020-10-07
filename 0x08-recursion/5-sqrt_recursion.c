#include "holberton.h"
/**
 * _sqrt_recursion - returns the sqrt of a number
 * @n: first parameter
 *
 * Description: uses recursion
 * Return: Always(0) Success
 */
int _sqrt_recursion(int n)
{
	int x = 1;
	int mid = n / 2;

	if (n == 1)
		return (1);

	while (mid >= x)
	{
		if (mid * mid == n)
		{
			return (mid);
		}
		mid--;
	}

	return (-1);
}
