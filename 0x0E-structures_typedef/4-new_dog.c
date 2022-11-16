#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: dog name
 * #age: dog age
 * @owner: dog owner
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, n, o;

	ndog = malloc(sizeof(*ndog));
	if (ndog == NULL || !(name) || !(owner))
	{
		free(ndog);
		return (NULL);
	}

	for (n = 0; name[n]; n++)
		;

	for (o = 0; owner[o]; o++)
		;

	ndog->name = malloc(n + 1);
	ndog->owner = malloc(o + 1);

	if (!(ndog->name) || !(ndog->owner))
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';

	ndog->age = age;

	for (i = 0; i < o; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';

	return (ndog);
}
