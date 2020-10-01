#include "holberton.h"
/**
 * _strncat - appends n strings together
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Description: the null type put at the end if n
 * Return: Always(0) Success
 */
char *_strncat(char *dest, char *src, int n)
{
	char *appended = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while ((*src != '\0') && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (appended);
}
