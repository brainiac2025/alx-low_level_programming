/**
 * leet - function that replace some letter
 * letters a and A to 4
 * letters e and E to 3
 * letters o and O to 0
 * letters t and T to 7
 * letters l and L to 1
 * @str: parameter pass
 * Return: the output
 */
char *leet(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == 65 || str[index] == 97)
			str[index] = 52;
		else if (str[index] == 69 || str[index] == 101)
			str[index] = 51;
		else if (str[index] == 79 || str[index] == 111)
			str[index] = 48;
		else if (str[index] == 84 || str[index] == 116)
			str[index] = 55;
		else if (str[index] == 76 || str[index] == 108)
			str[index] = 49;
		index++;
	}
	return (str);
}
