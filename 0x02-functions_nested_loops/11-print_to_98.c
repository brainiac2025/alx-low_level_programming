#include "main.h"

/**
 * print_to_98 - function to print number to 98
 *@n: one argument
 * Return: void 
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (start = n; start >= 98 start--)
		{
			_putchar((start / 10) + '0');
			_putchar((start % 10) + '0');
