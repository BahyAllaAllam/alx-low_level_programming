#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: head
 * @n: data
 * Return: Always EXIT_SUCCESS.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	new->prev = temp;
	temp->next = new;
	return (new);
}
