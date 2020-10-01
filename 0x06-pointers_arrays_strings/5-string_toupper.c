#include "holberton.h"
/**
 * string_toupper - converts to uppercase
 * @s: first parameter
 *
 * Description: converts lowercase letters only
 * Return: Always(0) Success
 */
char *string_toupper(char *s)
{
	int x = 0;
	char *str = s;

	while (s[x] != '\0')
	{
		if ((s[x] >= 'a') && (s[x] <= 'z'))
		{
			s[x] = (s[x] - 32);
			*str = s[x];
		}
		x++;
	}
	return (str);
}
