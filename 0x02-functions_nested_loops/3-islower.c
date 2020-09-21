#include "holberton.h"
/**
 * _islower - prints 1 or 0 depending on input
 *
 * Description: 
 * Return: Always(0) Success
 */
int _islower(char alphabet)
{
	if (alphabet >= 'a' && alphabet <= 'z')
		return (1);
	else if (alphabet >= 'A' && alphabet <= 'Z')
		return (0);
	else
		return (1);
	return (0);
}
