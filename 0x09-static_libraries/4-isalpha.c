#include "holberton.h"
/**
 * _isalpha - prints 1 or 0 depending on input
 * @c: collects a char type
 *
 * Description: Checks for alphabets lower and uppercase
 * Return: Always(0) Success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c == '\0')
		return (1);
	else
		return (0);
	return (0);
}
