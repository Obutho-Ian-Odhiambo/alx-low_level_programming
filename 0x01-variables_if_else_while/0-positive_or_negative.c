#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Makes the sum of two numbers
 *
 * Description: This is a longer description.
 * But you're totally free to use several lines to properly
 * describe your function
 * Return: The sum of the two parameters
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
