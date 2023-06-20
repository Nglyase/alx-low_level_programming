#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -creates a new dog
 *@name: name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *
 *Return: struct dog
 *if function fails: return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_doggy;
	int x;
	int countName = 0;
	int countOwner = 0;

	p_doggy = malloc(sizeof(*p_doggy));
	if (p_doggy == NULL || !(name) || !(owner))
	{
		free(p_doggy);
		return (NULL);
	}
	while (name[countName] != '\0')
		countName++;
	while (owner[countOwner] != '\0')
		countOwner++;
	p_doggy->name = malloc(countName + 1);
	p_doggy->owner = malloc(countOwner + 1);
	if (!(p_doggy->name) || !(p_doggy->owner))
	{
		free(p_doggy->owner);
		free(p_doggy->name);
		free(p_doggy);
		return (NULL);
	}
	for (x = 0; x < countName; x++)
		p_doggy->name[x] = name[x];
	p_doggy->name[x] = '\0';
	p_doggy->age = age;
	for (x = 0; x < countOwner; x++)
		p_doggy->owner[x] = owner[x];
	p_doggy->owner[x] = '\0';
	return (p_doggy);
}
