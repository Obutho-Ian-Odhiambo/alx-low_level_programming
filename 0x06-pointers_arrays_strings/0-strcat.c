#include "holberton.h"
/**
 * _strcat - appends strings together
 * @dest: first parameter
 * @src: second parameter
 *
 * Description: the null type put at the end
 * Return: Always(0) Success
 */
char *_strcat(char *dest, char *src)
{
	char *appended = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (appended);
}
