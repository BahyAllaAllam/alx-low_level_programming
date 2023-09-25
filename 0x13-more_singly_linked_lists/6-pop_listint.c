#include "lists.h"
/**
 * pop_listint - check the code
 * @head: head
 *
 * Return: int
*/
int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);

	listint_t *temp;
	int n;

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
