#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Description: works the stdlib strcpy
 * Return: Always(0) Success
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *copy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n += 1;
	}
	*dest = '\0';
	return (copy);
}
