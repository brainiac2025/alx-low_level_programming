#include "main.h"

/**
 * _islower - function to check for a small letter
 * @c: one argument c was pass
 * Return: 1 for lowercase and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
