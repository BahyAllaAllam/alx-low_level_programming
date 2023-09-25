#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: head
 * @n: n
 *
 * Return: Always 0.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nint_t = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		if (!nint_t)
			return (NULL);
		nint_t->n = n;
		nint_t->next = NULL;
		temp->next = nint_t;
	}
	else
		*head = nint_t;

	return (nint_t);
}
