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
	dog_t *new_dawg;
	int i, n, o;

	for (n = 0, name[n]; n++)
		;
	for (o = 0, owner[o]; o++)
		;

	new_dawg = malloc(sizeof(*new_dawg));

	if (new_dawg == NULL || !(owner) || !(name))
	{
		free(new_dawg);
		return (NULL);
	}

	new_dawg->name = malloc(n + 1);
	new_dawg->owner = malloc( o + 1);

	if (!(new_dawg->name) || !(new_dawg->owner))
	{
		free(new_dawg->name);
		free(new_dawg->owner);
		free(new_dawg);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		new_dawg->name[i] = name[i];
	new_dawg->name[i] = '\0';

	new_dawg->age = age;

	for (i = 0; i < o; i++)
		p_dog->owner[i] = owner[i];
	new_dawg->owner[i] = '\0';

	return (new_dawg);
}
