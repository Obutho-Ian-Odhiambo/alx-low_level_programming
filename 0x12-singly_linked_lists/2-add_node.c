#include "lists.h"

/**
 * add_node - adds a node at the beginning
 * @head: first parameter
 * @str: second parameter
 *
 * Description - adds a node at the beginning
 * Return: nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;

	new->str = strdup(str);
	new->len = strlen(str);

	*head = new;

	return (new);
}
