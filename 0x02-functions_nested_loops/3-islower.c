#include <main.h>

int _islower(int c);
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - function to check if an entry is lower case
 *@c: argument to check
 * Return: 1 as lowercase and 0 as not lowercase
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
