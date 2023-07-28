/**
 * rot13 - function that replace letter by switch place to 13tih
 * @str: parameter pass
 * Return: the output
 */
char *rot13(char *str)
{
	int index, index2;
	char condition[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replacement[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	index = 0;
	while (str[index] != '\0')
	{
		index2 = 0;
		while (condition[index2] != '\0')
		{
			if (str[index] == condition[index2])
			{
				str[index] = replacement[index2];
				break;
			}
			index2++;
		}
		index++;
	}
	return (str);
}
