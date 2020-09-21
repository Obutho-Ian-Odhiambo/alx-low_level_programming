#include "holberton.h"
/**
 * main - prints all aphabets in lowercase
 *
 * Description: They are sorted by default
 * Return: Always(0) Success
 */
int print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
