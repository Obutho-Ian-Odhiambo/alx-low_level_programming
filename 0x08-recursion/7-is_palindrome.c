#include "holberton.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: first parameters
 *
 * Description: returns 1 if a string is a palindrome and 0 if not
 * Return: Always(0) Success
 */
int is_palindrome(char *s)
{
	int i, len, step = 0;

	for (len = 0; s[len] != 0; len++)
	{
	}

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] == s[len - i - 1])
			step++;
	}

	if (step == i)
		return (1);
	else if (step == 0)
		return (1);
	else
		return (0);

}
