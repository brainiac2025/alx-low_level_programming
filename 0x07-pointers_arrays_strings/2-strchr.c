/**
 * _strchr - function that search for character in a string
 * @s: source string
 * @c: chracter to search for
 * Return: the character if found Null otherwise
 */
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}
	return ('\0');
}
