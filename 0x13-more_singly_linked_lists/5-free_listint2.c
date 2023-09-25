#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: head
 *
 * Return: NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head->next;
		free(*head->n);
		free(*head);
		*head = temp;
	}
}
