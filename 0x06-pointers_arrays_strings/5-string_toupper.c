/**
 * string_toupper - function that convert lower case of letter
 * to upper in a string
 * @str: parameter
 * Return: output character
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
			str++;
		}
		else
		{
			str++;
		}
	}
	return (str);
}
