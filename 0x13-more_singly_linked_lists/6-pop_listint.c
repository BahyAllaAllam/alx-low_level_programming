#include "lists.h"
/**
 * pop_listint - check the code
 * @head: head
 *
 * Return: Always 0.
*/
int pop_listint(listint_t **head)
{
	if (!head)
		return (0);

	listint_t *temp = **head;

	*head = temp->next;
	free(temp);
	return (*head->n);
}
