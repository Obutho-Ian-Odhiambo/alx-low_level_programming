#include "holberton.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: first parameter
 * @to: second parameter
 *
 * Description: sets the value of a pointer to a char
 * Return: Always(0) Success
 */
void set_string(char **s, char *to)
{
	(*s) = to;
}
