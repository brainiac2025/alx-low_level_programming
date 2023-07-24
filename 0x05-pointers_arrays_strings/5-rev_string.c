#include "main.h"
/**
 * rev_string - function that prin the reverse of a string
 * @s: argument
 * Return: void
 */
void rev_string(char *s)
{
	int count, i;
	char tmp;

	tmp = s[0];
	count = 0;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		tmp = s[i];
		s[i] = s[count];
		s[count] = tmp;
	}
}
