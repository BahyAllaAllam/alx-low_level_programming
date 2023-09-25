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

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
