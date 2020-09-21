#include "holberton.h"
/**
 * print_sign - prints the sign of a num
 * @num: input parameter
 *
 * Description: checks signs of numbers
 * Return: Always(0) Success
 */
int print_sign(int n)
{

	if (n > 0)
		return(1);

	else if (n == 0)
		return(0);

	else 
		return(-1);
}
