#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: where struct is tored
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}