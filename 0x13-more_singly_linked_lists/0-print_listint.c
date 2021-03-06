#include "lists.h"

/**
 * print_listint - prints a lists of nodes
 * @h: first parameter
 *
 * Description - prints a list of nodes
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
