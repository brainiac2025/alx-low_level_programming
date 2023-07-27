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
		if (str[index] == 'a' || str[index] == 'A')
			str[index] = 52;
		if (str[index] == 'e' || str[index] == 'E')
			str[index] = 51;
		if (str[index] == 'o' || str[index] == 'O')
			str[index] = 48;
		if (str[index] == 't' || str[index] == 'T')
			str[index] = 55;
		if (str[index] == 'l' || str[index] == 'L')
			str[index] = 49;
		index++;
	}
	return (str);
}
