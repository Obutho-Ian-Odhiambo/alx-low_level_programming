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
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	return (NULL);
}
