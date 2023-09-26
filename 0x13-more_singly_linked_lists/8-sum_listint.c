#include "lists.h"

/**
 * sum_listint - check the code
 * @head: head
 *
 * Return: Always 0.
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
