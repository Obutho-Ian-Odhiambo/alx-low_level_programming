#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 *
 * Description: a function that concatenates two strings
 * Return: Always(0) Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int s1_len, s2_len;
	unsigned int i;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	;

	str = malloc(s1_len + s2_len + 1);


	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[s1_len + i] = s2[i];

	str[s1_len + n] = '\0';

	if (str == NULL)
		return (NULL);

	return (str);
}
