#include "holberton.h"
/**
 * main - prints all aphabets in lowercase 10 times
 *
 * Description: They are sorted by default 10 times
 * Return: Always(0) Success
 */
int print_alphabet_x10(void)
{
	char alphabet;
	int x;

	for (x = 0; x <= 10; x++)
	{

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
