#include "holberton.h"
/**
 * leet - converts string to leet
 * @str: first parameter
 *
 * Description: leet is 1337
 * Return: Always(0) Success
 */
char *leet(char *str)
{
	int i, j;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	i = 0;

	for  (; str[i] != '\0'; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (s[j] == str[i])
				str[i] = s1[j];
		}
	}
	return (str);
}
