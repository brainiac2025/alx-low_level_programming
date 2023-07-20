#include "main.h"

/**
 * print_triangle - function to print # triangle according to parameter
 * @size: parameter pass
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num;
		int col;

		for (num = 1; num <=size; num++)
		{
			for (col = num; col < size; col++)
			{
				_putchar(' ');
			}
			for (col = 1; col <=num; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
