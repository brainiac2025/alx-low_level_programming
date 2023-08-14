#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that print a struct dog
 * @d: struct type
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(NIL)" : d->name);

		if (d->age <= 0.0)
			printf("Age: (NIL)\n");
		else
			printf("Age: %f\n", d->age);

		printf("Owner: %s\n", d->owner == NULL ? "(NIL)" : d->owner);
	}
}
