#include "holberton.h"
#include <stdio.h>
/**
 * main - 
 *
 * Description: 
 * Return: Always(0) Success
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	char *charArray = (char *)a;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d",charArray[j * size + i]);
		}
		printf("\n");
	}
}
