#include "lists.h"
/**
 * pop_listint - check the code
 * @head: head
 *
 * Return: Always 0.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (!temp || !head)
		return (0);

	*head = temp->next;
	free(temp->n);
	free(temp);
	return (*head->n);
}
