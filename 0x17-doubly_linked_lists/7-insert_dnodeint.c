#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code
 * @h: head
 * @idx: index
 * @n: data
 * Return: Always EXIT_SUCCESS.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	while (temp)
	{
		if (idx == count)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;
			if (temp->prev != NULL)
				temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	if (idx == count)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	free(new_node);
	return (NULL);
}
