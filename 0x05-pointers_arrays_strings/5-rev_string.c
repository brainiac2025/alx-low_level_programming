#include "main.h"
/**
 * rev_string - function that prin the reverse of a string
 * @s: argument
 * Return: void
 */
void rev_string(char *s)
{
	int count, i;

	count = 0;
	i = 0;

	/* we need to get the length of the character first*/
	while (*s != '\0')
	{
		/*increment the count which is going to represent length*/
		count++;
		/* increment address*/
		s++;
	}
	s -=count;
	/* loop through using the length then print array index of each*/

	while (count > 0)
	{

		count--;
	}
}
