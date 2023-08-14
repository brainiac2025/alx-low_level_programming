#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - function that calculate length of pointer to char
 * @str: the string
 * Return: int value
 */
int len(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * copy - function to copy the character
 * @source: source to copy from
 * @dest: where to copy to
 * Return: the destination
 */
char *copy(char *source, char *dest)
{
	int i;

	for (i = 0; source[i] != '\0'; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - A struct function
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: struct type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *new_d;

	name_len = len(name);
	owner_len = len(name);
	new_d = (dog_t *)malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);
	new_d->name = malloc(sizeof(char) * (name_len + 1));
	if (new_d->name == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	new_d->owner = malloc(sizeof(char) * (owner_len + 1));

	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}

	copy(name, new_d->name);
	copy(owner, new_d->owner);

	new_d->age = age;

	return (new_d);
}
