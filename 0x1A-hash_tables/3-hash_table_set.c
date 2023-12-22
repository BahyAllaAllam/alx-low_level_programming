#include "hash_tables.h"
/**
 * hash_table_set - check the code
 * @ht: hash table
 * @key: key
 * @value: value of the key
 * Return: Always EXIT_SUCCESS.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *current = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = (value != NULL) ? strdup(value) : NULL;
			if (current->value == NULL && value != NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = (value != NULL) ? strdup(value) : NULL;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
