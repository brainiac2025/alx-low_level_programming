/**
 * _strspn - functions that return the numbe of byte in the initial segment
 * @s: pointer to the null terminated string
 * @accept: pointer to null terminated string to match
 * Return: the number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int index1, index2, found;
	unsigned int count;

	index1 = 0;
	count = 0;
	found = 1;
	while (s[index1] != '\0' && found)
	{
		index2 = 0;
		found = 0;
		while (accept[index2] != '\0')
		{
			if (s[index1] == accept[index2])
			{
				found = 1;
				count++;
				break;
			}
			index2++;
		}
		index1++;
	}
	return (count);
}
