#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: first parameter
 *
 * Description: uses malloc
 * Return: Always(0) Success
 */
char *_strdup(char *str)
{
	char *space;
	char *new_string;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	space = (char *) malloc(sizeof(char) * len + 1);

	if (space == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);


	new_string = space;

	while (*str)
	{
		*new_string = *str;
		new_string++;
		str++;
	}
	*new_string = '\0';

	return (space);
}
