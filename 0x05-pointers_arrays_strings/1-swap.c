#include "main.h"
/**
 * swap_int - The function swap value of a to b and vice versa
 * @a: first argument
 * @b: second argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
