#include "dog.h"
#include <stdlib.h>
/**
* new_dog - a function that creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: returns NULL or pointer to struct dog
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *dg;

	name_len = owner_len = 0;
	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(name_len * sizeof(dg->name));
	if (dg == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		dg->name[i] = name[i];

	dg->age = age;

	dg->owner = malloc(owner_len * sizeof(dg->owner));
	if (dg == NULL)
		return (NULL);
	for (i = 0; i < owner_len; i++)
		dg->owner[i] = owner[i];
	return (dg);
}
