#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - 
 *
 * Description: 
 * Return: Always(0) Success
 */
char **strtow(char *str)
{
	int i, x, j, len;
	char **new_string;

	x = 0;

	for (len = 0; str[len] != '\0'; len++)
	;

	new_string = malloc(len);

	for(i = 0; i <= len; i++)
	{
		if(str[i] == ' '|| str[i] == '\0')
		{
			new_string[x][j] = '\0';
			x++;
			j = 0;
		}
		else
		{
			new_string[x][j] = str[i];
			j++;
		}
	}
	return (new_string);
}
