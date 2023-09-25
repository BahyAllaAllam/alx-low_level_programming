#include "lists.h"

/**
 * free_listint - check the code
 * @head: head
 *
 * Return: NULL
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
