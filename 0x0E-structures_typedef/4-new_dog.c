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
 * Return: void
 */
void copy(char *source, char *dest)
{
	while (*source != '\0')
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\0';
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
	dog_t *new_d = (dog_t *)malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);
	new_d->name = (char *)malloc(sizeof(len(name) + 1));

	if (new_d->name == NULL)
		return (NULL);

	new_d->owner = (char *)malloc(sizeof(len(owner) + 1));

	if (new_d->owner == NULL)
		return (NULL);

	copy(name, new_d->name);
	copy(owner, new_d->owner);

	new_d->age = age;

	return (new_d);
}
