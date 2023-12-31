#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that print name
 * @name: name to be printed
 * @f: function that print the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(f)(name);
}
