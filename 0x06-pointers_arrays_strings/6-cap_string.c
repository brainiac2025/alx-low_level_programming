/**
 * cap_string - function that convert lower case of letter
 * to upper in a string
 * @str: parameter
 * Return: output character
 */
char *cap_string(char *str)
{
	int index, first;
	int multipleOperator;

	index = 0;
	first = 1;
	multipleOperator = 1;
	while (str[index] != '\0')
	{
		if (first && str[index] >= 'a' && str[index] <= 'z')
		{
			if (multipleOperator)
			{
				str[index] -= 32;
				multipleOperator = 0;
			}
			first = 0;
		}
		else if (str[index] == ' ' || str[index] == '\t' ||
str[index] == '\n' || str[index] == ',' || str[index] == ';' ||
str[index] == '.' || str[index] == '!' || str[index] == '?' ||
str[index] == '"' || str[index] == '(' || str[index] == ')' ||
str[index] == '}' || str[index] == '}')
		{
			first = 1;
			multipleOperator = 1;
		}
		else
		{
			multipleOperator = 0;
		}
		index++;
	}
	return (str);
}
