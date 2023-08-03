int len(char *s);
int compare_string(char *s, int start, int end);
/**
 * is_palidrome - function to check if string is palidrome
 * @s: the string
 * Return: 1 for success and 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = len(s);

	return (compare_string(s, 0, length - 1));
}

/**
 * len - to check for string length
 * @s: the string to check it length
 * Return: length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + len(s + 1));
}

/**
 * compare_string - function to check for the palidrome
 * @s: the string
 * @start: start for loop
 * @end: end of the loop
 * Return: 1 for success 0 for fail amd its self for repitition
 */
int compare_string(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (compare_string(s, start + 1, end - 1));
}
