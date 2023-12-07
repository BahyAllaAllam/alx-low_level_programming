#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t i = 0;
	while(temp)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
		i++;
	}
	return (i);
}
