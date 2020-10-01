#include "holberton.h"
/**
 * leet - converts string to leet
 * *s: first parameter
 *
 * Description: leet is 1337
 * Return: Always(0) Success
 */
char *leet(char *s)
{
	int x = 0;
	char *str = s;

	while (s[x] != '\0')
	{
		if ((s[x] == 'a') || (s[x] == 'A'))
		{
			s[x] = '4';
		}
		else if ((s[x] == 'e') || (s[x] == 'E'))
		{
			s[x] = '3';
		}
		else if ((s[x] == 'o') || (s[x] == 'O'))
		{
			s[x] = '0';
		}
		else if ((s[x] == 't') || (s[x] == 'T'))
		{
			s[x] = '7';
		}
		else if ((s[x] == 'l') || (s[x] == 'L'))
		{
			s[x] = '1';
		}

		x++;
	}
	return (str);
}
