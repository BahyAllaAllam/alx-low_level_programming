#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: Always EXIT_SUCCESS.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp)
	{
		if (index == count)
			return (temp);
		temp = temp->next;
		count++;
	}

	return (NULL);
}
