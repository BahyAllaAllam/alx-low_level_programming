#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * new_dog - check the code
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct pointer dog and null if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (0);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (!dog)
		return (0);
	(*dog).name = malloc(sizeof(char) * strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	(*dog).name = strcpy((*dog).name, name);
	(*dog).age = age;
	(*dog).owner = strcpy((*dog).owner, owner);

	return (dog);
}
