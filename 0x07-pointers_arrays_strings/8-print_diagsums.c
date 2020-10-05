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
	int i, j, d1 = 0, d2 = 0;
	char *ca = (char *)a;

	for (i = 0; i < size; i++)
	{
		for(j = 0;j < size; ++j)
		{
			if(i == j)
				d1 += ca[i][j];
			if((i + j) == (size - 1))
				d2 += ca[i][j];
		}
	}
	printf("\nFirst Diagonal Sum=%d",d1);
	printf("\nSecond Diagonal Sum=%d",d2);
}
