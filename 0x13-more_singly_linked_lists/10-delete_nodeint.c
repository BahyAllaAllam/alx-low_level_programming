#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: head
 * @index: index
 *
 * Return: Always 0.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev_n;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (idx == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			prev_n->next = temp->next;
			free(temp);
			return (1);
		}
		prev_n = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
