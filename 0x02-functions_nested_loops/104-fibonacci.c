#include <stdio.h>
/**
 * main - 
 *
 * Description: 
 * Return: Always(0) Success
 */
int main(void)
{
	int f1 = 0, f2 = 1, i, n;
	int next; 

	n = 98;

	for (i = 1; i <= n; i++) 
	{ 
		printf("%d, ", f2); 
		next = f1 + f2; 
		f1 = f2; 
		f2 = next; 
	}
	return (0); 
}
