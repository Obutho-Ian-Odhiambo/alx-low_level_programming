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
	return (palindrome(s, 0));
}

/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: first paramter
 * @n: second parameter
 *
 * Description: returns 1 if a string is a palindrome and 0 if not
 * Return: Always(0) Success
 */

int palindrome(char *s, int n)
{
	int i, len;

	for (len = 0; s[len] != 0; len++)
	{
	}

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] == s[len - i - 1])
		{
			return (1);
		}

		return (0);
	}
	palindrome(s, n + 1);

	return (0);
}
