#include "holberton.h"
/**
 * wildcmp -  compares two strings and returns 1
 * @s1: first parameter
 * @s2: second parameter
 *
 * Description:  compares two strings and returns 1
 * Return: Always(0) Success
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
