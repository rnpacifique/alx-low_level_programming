#include <stdlib.h>
#include "dog.h"

/**
 * _copy - print  copy of passed in argument
 * @stc: data for making copy of
 * Return: pointer
 */

char *_copy(char *stc)
{
	char *p;
	int a, len;

	if (stc == NULL)
		return (NULL);

	for (len = 0; stc[len] != '\0'; len++)
		;
	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (a = 0; stc[a] != '\0'; a++)
	{
		p[a] = stc[a];
	}
	p[a] = '\0';
	return (p);
}

/**
 * new_dog -  creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *toti;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	toti = malloc(sizeof(dog_t));
	if (toti == NULL)
		return (NULL);

	new_name = _copy(owner);
	if (new_name == NULL)
	{
		free(toti);
		return (NULL);
	}
	(*toti).name  = new_name;
	(*toti).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*toti).name);
		free(toti);
		return (NULL);
	}
	(*toti).owner = new_owner;
	return (toti);
}



