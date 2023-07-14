#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* program to print all combination of 2 digits*/
	int first;
	int second;
	int third;
	int fourth;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			for (third = 48; third <= 57; third++)
			{
				for (fourth = 48; fourth <= 57; fourth++)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(fourth);
					if (first != 57 || second != 57 || third != 57 || fourth != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

