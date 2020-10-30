#include "lists.h"

/**
 *_strlen - function that counts the lenght of a string
 *@str: string to be counted
 *
 *Return: count
 */

int _strlen(const char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	return (i);
}
