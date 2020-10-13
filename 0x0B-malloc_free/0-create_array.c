#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - 
 *
 * Description: 
 * Return: Always(0) Success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	ptr = (char*) malloc(size);

	if (size == 0)
		return (NULL);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			ptr[x] = c;
		}
		return (ptr);
	}
	return (0);
}
