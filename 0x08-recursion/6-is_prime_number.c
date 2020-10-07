#include "holberton.h"
/**
 * main - 
 *
 * Description: 
 * Return: Always(0) Success
 */
int is_prime_number(int n, int x)
{

	if (x == 1)
		return (1);

	if (n % x == 0)
		return (0);
	else
		return (is_prime_number(n, x - 1));
}
