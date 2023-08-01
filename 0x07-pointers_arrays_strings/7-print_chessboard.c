#include "main.h"
/**
 * print_chessboard - function that print chess board
 * @a: multi dimentional array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int index, i;

	index = 0;
	while (a[index][8] != '\0')
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[index][i]);
		}
		_putchar('\n');
		index++;
	}
}
