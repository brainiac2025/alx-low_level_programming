#include "main.h"

/**
 * print_times_table - function to print times table of n
 * @n: argument n
 * Return: void
 */
void print_times_table(int n)
{
	int start;
	int mult;
	int inner;

	if (n > 0 && n < 15)
	{
		for (start = 0; start <= n; start++)
                {
                        for (inner = 0; inner <= n; inner++)
                        {
                                mult = start * inner;
                                if (mult < 10)
                                {
                                        _putchar(mult + '0');
					_putchar(' ');
					_putchar(' ');
                                }
				else if (mult < 100)
				{
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
					_putchar(' ');
				}
                                else
                                {
                                        _putchar((mult / 100) + '0');
                                        _putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
                                }
                                if (inner < n )
                                {
                                        _putchar(',');
					_putchar(' ');
                                }
                        }
                        _putchar('\n');
		}
	}
}
