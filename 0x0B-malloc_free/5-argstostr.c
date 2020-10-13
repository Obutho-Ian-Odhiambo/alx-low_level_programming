#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: first parameter
 * @av: second parameter
 *
 * Description:  concatenates all the arguments of your program
 * Return: Always(0) Success
 */
char *argstostr(int ac, char **av)
{
	int x, j, v = 0;
	int len = 1;
	char *str;


	for (x = 0; x < ac; x++)
	{
		len = len + strlen(av[x]);
	}

	str = malloc(sizeof(char) * len);

	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			str[v] = av[x][j];
			v++;
		}
		str[v] = '\n';
		v++;
	}
	str[v] = '\0';
	return (str);
}
