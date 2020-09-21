#include "holberton.h"
/**
 * print_sign - prints the sign of a num
 * @num: input parameter
 *
 * Description: checks signs of numbers
 * Return: Always(0) Success
 */
int print_sign(char num)
{

	if (num > 0)
		return(1);

	else if (num == 0)
		return(0);

	else 
		return(-1);
}
