/**
 * string_toupper - function that convert lower case of letter
 * to upper in a string
 * @str: parameter
 * Return: output character
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] -= 32;
			index++;
		}
		else
		{
			index++;
		}
	}
	return (str);
}
