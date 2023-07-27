/**
 * cap_string - function that convert lower case of letter
 * to upper in a string
 * @str: parameter
 * Return: output character
 */
char *cap_string(char *str)
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
		else if (str[index] >= 
		{
			index++;
		}
	}
	return (str);
}
