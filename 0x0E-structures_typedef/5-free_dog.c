#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dog
 * @d: first parameter
 *
 * Description: free dog
 * Return: Always(0) Success
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
