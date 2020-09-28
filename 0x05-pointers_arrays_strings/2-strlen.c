#include "holberton.h"
/**
 * _strlen - returns lenght of string
 * @s: first parameter
 *
 * Description: uses pointers
 * Return: Always(0) Success
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	return (i);
}
