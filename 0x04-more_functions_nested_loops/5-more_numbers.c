#include "main.h"

/**
 * more_numbers - function to print 0 - 14 (10 times)
 *
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int times;

	for (times = 1; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('1');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
