#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: h
 * @n: n
 *
 * Return: Always 0.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (!head || !temp)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
