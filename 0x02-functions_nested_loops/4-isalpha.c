#include "main.h"

/**
 *_isalpha- function that check for if character
 * is alphabet or not
 * @c: argument pass
 * Return: 1 for success and 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
