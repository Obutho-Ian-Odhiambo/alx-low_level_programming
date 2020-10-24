#include "variadic_functions.h"

/**
 * print_numbers - print number arguments
 * @separator: first parameter
 * @n: second parameter
 *
 * Return: print numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list prints;

	if (separator == NULL)
		return;

	va_start(prints, n);

	for (x = 0; x < n; x++)
	{
		if (x < n - 1)
		{
			printf("%d", va_arg(prints, int));
			printf("%s ", separator);
		}
		else
		{
			printf("%d", va_arg(prints, int));
		}
	}

	printf("\n");
}
