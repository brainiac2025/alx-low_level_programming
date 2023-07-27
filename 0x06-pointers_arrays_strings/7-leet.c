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
	int index, index2;
	char condition[] = "AEOTLaeotl";
	char replacement[] = "4307143071";

	index = 0;
	while (str[index] != '\0')
	{
		index2 = 0;
		while (index2 < 10)
		{
			if (str[index] == condition[index2])
			{
				str[index] = replacement[index2];
			}
			index2++;
		}
		index++;
	}
	return (str);
}
