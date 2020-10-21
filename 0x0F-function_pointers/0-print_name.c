#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: first parameter
 * @f: second parameter
 *
 * Description: prints a name
 * Return: Always(0) Success
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
