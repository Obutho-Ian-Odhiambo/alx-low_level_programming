#include "lists.h"

/**
 * free_list - frees a lists_t list
 * @head: first parameter
 *
 * Description - frees a list
 * Return: Free
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = *head;
		head = head->next;

		free(tmp->str);
		free(tmp);
	}
}
