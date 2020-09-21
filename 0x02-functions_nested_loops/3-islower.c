#include "holberton.h"
/**
 * _islower - prints 1 or 0 depending on input
 *
 * Description: 
 * Return: Always(0) Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
	return (0);
}
