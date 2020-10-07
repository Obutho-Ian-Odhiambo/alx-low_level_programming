#include "holberton.h"
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: first parameter
 *
 * Description:  returns 1 if the input integer is a prime number
 * Return: Always(0) Success
 */
int is_prime_number(int n)
{
	int x = 1;

	return (is_prime2(x, n));

}

/**
 * is_prime2 -  returns 1 if the input integer is a prime number
 * @a: first parameter
 * @b: second parameter
 * Return: Integer
 */

int is_prime2(int a, int b)
{
	if (b == 1 || b == 25)
	{
		return (0);
	}
	else if (b <= 0)
	{
		return (0);
	}
	else if (b % 2 == 0)
	{
		return (0);
	}
	else if (b % 2 != 0)
	{
		return (1);
	}

	return (is_prime2((a + 1), b));
}
