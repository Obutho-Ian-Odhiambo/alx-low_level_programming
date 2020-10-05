#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second parameter
 *
 * Description: locates a character in a string
 * Return: Always(0) Success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; s++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}
