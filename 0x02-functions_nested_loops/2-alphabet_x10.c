#include "holberton.h"
/**
 * print_alphabet_x10 - prints letters 
 *
 * Description: prints leters 10 times
 * Return: Always(0) Success
 */
void print_alphabet_x10(void)
{
	int x;
	char a;

	x = 10;

	while (x <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchat(a);
	}
}
