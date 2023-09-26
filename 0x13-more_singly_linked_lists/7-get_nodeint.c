#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: head
 * @index: index
 *
 * Return: Always 0.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (!head)
		return (NULL);
	while (temp)
	{
		if (index == i)
			return (temp);
		i++;
		temp = temp->next;
	}
}
