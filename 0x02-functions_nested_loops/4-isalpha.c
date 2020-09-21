#include "holberton.h"
/**
 * _isalpha - prints 1 or 0 depending on input
 * @alphabet: collects a char type
 *
 * Description: Checks for alphabets lower and uppercase
 * Return: Always(0) Success
 */
int _isalpha(char alphabet)
{
	if (alphabet >= 'a' && alphabet <= 'z')
		return (1);
	else if (alphabet >= 'A' && alphabet <= 'Z')
		return (1);
	else if (alphabet == '\0')
		return (1);
	else
		return (0);
	return (0);
}
