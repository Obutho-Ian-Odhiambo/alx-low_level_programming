#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char *);

		if (separator == NULL)
		{
			if (str != NULL)
				printf("%s ", str);
			else
				printf("(nil) ");
		}
		else
		{
			if (str != NULL && x < n - 1)
			{
				printf("%s", str);
				printf("%s ", separator);
			}
			else if (str != NULL && x == n - 1)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil) ");
			}
		}
	}
	printf("\n");
}
