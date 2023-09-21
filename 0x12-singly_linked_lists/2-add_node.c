#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - check the code
 * @head: head
 * @str: str
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_h = malloc(sizeof(list_t));

	if (!head || !n_h)
		return (NULL);
	if (str)
	{
		n_h->str = strdub(str);
		if (!n_h)
		{
			free(n_h);
			return (NULL);
		}
		n_h->len = strlen(str);
	}
	n_h->next = *head;
	*head = n_h;
	return (n_h);
}
