#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array size n
 * @a: first parameter
 * @n: second parameter
 *
 * Description: n may vary occasionaly
 * Return: Always(0) Success
 */
void print_array(int *a, int n)
{

	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			break;
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
