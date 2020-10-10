#include "holberton.h"
#include <stdio.h>
/**
 * _strstr -  locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 *
 * Description:  locates a substring
 * Return: Always(0) Success
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *first = haystack;
		char *compare = needle;

		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}

		if (!*compare)
			return (first);

		haystack = first + 1;
	}
	return (NULL);
}
