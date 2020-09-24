#include <stdio.h>
/**
 * main - prints nultplies of 3 or 5
 *
 * Description: multiples between 0 and 100
 * Return: Always(0) Success
 */
int main(void)
{
	int start, end;

	end = 99;

	for (start = 1; start <= end; start++)
	{
		if (start % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (start % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((start % 3 == 0) && (start % 5 == 0))
		{
			printf("FizzBuzz ");
		} else
		{
			printf("%d ", start);
		}
	}

	printf("Buzz\n");

	return (0);
}
