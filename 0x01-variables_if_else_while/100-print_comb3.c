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
		for (second = first + 1; second <= 57; second++)
		{
			putchar(first);
			putchar(second);
			if(first != 56 || second != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
