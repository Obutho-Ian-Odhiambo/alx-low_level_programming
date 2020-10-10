#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first parameter
 * @accept: second parameter
 *
 * Description: s & accept are the two strings
 * Return: Always(0) Success
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, s_len, exist = 0;

	for (i = 0; s[i] != '\0'; i++)

	s_len = i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= s_len)
				{
					s_len = j;
					exist = 1;
				}
			}
		}
	}
	if (exist == 1)
		return (&s[s_len]);
	else
		return (NULL);

	return (0);
}
