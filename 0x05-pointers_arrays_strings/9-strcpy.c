#include "holberton.h"
/**
 * _strcpy - copies a string
 * @dest: first parameter
 * @src: second parameter
 *
 * Description: paramaters have strings
 * Return: Always(0) Success
 */
char *_strcpy(char *dest, char *src)
{
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	

	return ((char *) dest);
}
