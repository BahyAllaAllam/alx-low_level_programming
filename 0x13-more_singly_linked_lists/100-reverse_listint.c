#include "lists.h"

/**
 * reverse_listint - check the code
 * @head: head
 *
 * Return: Always 0.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next;

	temp = next = *head;
	*head = NULL;

	while (next != 0)
	{
		next = next->next;
		temp->next = *head;
		*head = temp;
		temp = next;
	}
	return (*head);
}
