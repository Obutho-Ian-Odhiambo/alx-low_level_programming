#include "holberton.h"
/**
 * _isdigit - prints 1 or 0 depending on input
 * @c: collects a char type
 *
 * Description: Checks for digits 0 to 9
 * Return: Always(0) Success
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
	return (0);
}
