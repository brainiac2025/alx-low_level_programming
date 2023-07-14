#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*program to print combination of two digits*/
	int first;
	int second;

	for (first = 48; first <= 57; first++)
	{
		for (second = 49; second <= 57; second++)
		{
			putchar(first);
			putchar(second);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
