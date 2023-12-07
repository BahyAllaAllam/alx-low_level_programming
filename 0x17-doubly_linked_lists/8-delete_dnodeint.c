#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: Always EXIT_SUCCESS.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (index == count)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}

	return (-1);
}
