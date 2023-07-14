#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*
	 * program to print 0 to 9 and a-f which
	 * is hexadecimal number
	 */
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (i > 57 && i < 97)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
