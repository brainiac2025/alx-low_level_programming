/**
 * _strpbrk - functions that locate the first occurence in the string
 * @s: pointer to the null terminated string
 * @accept: pointer to null terminated string to match
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int index1, index2;

	index1 = 0;
	while (s[index1] != '\0')
	{
		index2 = 0;
		while (accept[index2] != '\0')
		{
			if (s[index1] == accept[index2])
			{
				return (&s[index1]);
			}
			index2++;
		}
		index1++;
	}
	return ('\0');
}
