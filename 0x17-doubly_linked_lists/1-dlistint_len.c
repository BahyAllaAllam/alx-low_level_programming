#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: head
 * Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
