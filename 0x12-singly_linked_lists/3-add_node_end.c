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
	list_t *temp = *head;

	if (!n_t)
		return (NULL);
	n_t->str = strdup(str);
	n_t->len = strlen(str);
	n_t->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = n_t;
	}
	else
		*head = n_t;  

	return (n_t);
}
