#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prin the reverse of a string
 * @s: argument
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	count = 0;

	/* we need to get the length of the character first*/
	while (*s != '\0')
	{
		/*increment the count which is going to represent length*/
		count++;
		/* increment address*/
		s++;
	}

	s -= count;
	/* loop through using the length then print array index of each*/

	while (count >= 0)
	{
		count--;
		_putchar(s[count]);
	}
	_putchar('\n');
}
