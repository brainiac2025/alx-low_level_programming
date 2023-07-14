#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*
	 * program to print 0 to 9 using putchar
	 * * and seperate each number by comma
	 */
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
