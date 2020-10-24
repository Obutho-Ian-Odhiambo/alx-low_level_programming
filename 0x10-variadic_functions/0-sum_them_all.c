#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: The number of arguments
 *
 * Return: sum if n != 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum;

	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	sum = 0;

	for (x = 0; x < n; x++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);
	return (sum);
}
