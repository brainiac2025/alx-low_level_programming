#include <stdio.h>
#include <stdlib.h>

void print_alphabet(void);

/**
 * main- Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print a-z
 * no return value
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
