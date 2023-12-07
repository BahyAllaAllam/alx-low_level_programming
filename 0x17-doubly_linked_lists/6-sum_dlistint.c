#include "lists.h"
/**
 * sum_dlistint - dlistint_len
 * @head: head
 * Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp = head;
	int summ = 0;

	if (!head)
		return (0);
	while (temp)
	{
		summ += temp->n;
		temp = temp->next;
	}

	return (summ);
}
