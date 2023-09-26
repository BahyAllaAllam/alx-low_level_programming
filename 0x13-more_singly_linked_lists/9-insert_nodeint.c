#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: head
 * @idx: idx
 * @n: n
 *
 * Return: Always 0.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_n = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new_n || !head)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	else
	{
		while (temp && i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		new_n->next = temp->next;
		temp->next = new_n;
		return (new_n);
	}
	return (NULL);
}
