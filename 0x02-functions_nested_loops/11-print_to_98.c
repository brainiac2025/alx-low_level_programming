#include "main.h"

/**
 * print_to_98 - function to print number to 98
 *@n: one argument
 * Return: void
 */
void print_to_98(int n)
{
	int start;

	if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			if (start >= 100)
			{
				_putchar((start / 100) + '0');
				_putchar(((start % 100) / 10) + '0');
				_putchar(((start % 100) % 10) + '0');
			}
			else
			{
				_putchar((start / 10) + '0');
				_putchar((start % 10) + '0');
			}
			if(start > 98 )
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n >= 0 && n <= 98)
	{
		for (start = n; start <= 98; start++)
		{
			if (start >= 10)
			{
				_putchar((start / 10) + '0');
				_putchar((start % 10) + '0');
			}
			else
			{
				_putchar(start + '0');
			}
			if (start < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n < 0)
	{
		for (start = n; start <= 98; start++)
		{
			int num;

			if (start < 0)
			{
				_putchar('-');
				num = -start;
				if (num >= 10)
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else
				{
					_putchar(num + '0');
				}
			}
			else
			{
				if (start >= 10)
				{
					_putchar((start / 10) + '0');
					_putchar((start % 10) + '0');
				}
				else
				{
					_putchar(start + '0');
				}
			}
			if (start < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
