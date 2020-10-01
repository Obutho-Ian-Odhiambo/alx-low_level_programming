#include "holberton.h"
/**
 * cap_string - capitalize string words
 * @s: first parameter
 *
 * Description: Begining of every word
 * Return: Always(0) Success
 */
char *cap_string(char *s)
{
	int x = 0;
	char *str = s;

	while (s[x] != '\0')
	{
		if (x == 0)
		{
			if ((s[x] >= 'a') && (s[x] <= 'z'))
				s[x] = (s[x] - 32);
			continue;
		}
		else if ((s[x] == ' ') || (s[x] == '\t') || (s[x] == '\n')
			 || (s[x] == ',') || (s[x] == ';') || (s[x] == '.')
			 || (s[x] == '!') || (s[x] == '?') || (s[x] == '"')
			 || (s[x] == '(') || (s[x] == ')') || (s[x] == '{')
			 || (s[x] == '}'))
		{
			++x;

			if ((s[x] >= 'a') && (s[x] <= 'z'))
			{
				s[x] = (s[x] - 32);
				continue;
			}
		}
		x++;
	}
	return (str);
}
