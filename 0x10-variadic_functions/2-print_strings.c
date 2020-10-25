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

		if (str != NULL)
		{
			printf("%s", str);

			if (x < n - 1 && separator != NULL)
				printf("%s ", separator);
		}
		else
		{
			printf("(nil)");

			if (x < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
