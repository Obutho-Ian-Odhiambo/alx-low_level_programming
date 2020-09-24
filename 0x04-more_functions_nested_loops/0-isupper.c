#include "holberton.h"
/**
 * _isupper - prints 1 or 0 depending on input
 * @c: first parameter
 *
 * Description: checks for uppercase letters
 * Return: Always(0) Success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

	return (0);
}
