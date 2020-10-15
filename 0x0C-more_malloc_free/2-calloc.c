#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: first parameter
 * @size: second parameter
 *
 * Description: function that allocates memory for an array
 * Return: Always(0) Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int x;

	memory = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (x = 0; x <= (nmemb * size); x++)
		memory[x] = 0;

	if (memory == NULL)
		return (NULL);

	return (memory);
}
