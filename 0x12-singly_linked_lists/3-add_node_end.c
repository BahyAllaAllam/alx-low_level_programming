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

	if (!head || !n_t)
		return (NULL);
	if (str)
	{
		n_t->str = strdup(str);
		if (!n_t)
		{
			free(n_t);
			return (NULL);
		}
		n_t->len = strlen(str);
		n_t->next = NULL;
	}
	while (*head)
	{
		*head = head->next;
	}
	head->next = n_t;
	return (n_t);
}
