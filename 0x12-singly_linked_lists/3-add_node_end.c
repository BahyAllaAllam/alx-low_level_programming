#include "lists.h"

/**
 * add_node_end - check the code
 * @head: head
 * @str: str
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_t = malloc(sizeof(list_t));

	if (!n_t)
		return (NULL);
	n_t->str = strdup(str);
	n_t->len = strlen(str);
	n_t->next = NULL;

	if (head)
	{
		while (head->next)
			head = head->next;
		head->next = n_t;
	}
	else
		head = n_t;

	return (n_t);
}
