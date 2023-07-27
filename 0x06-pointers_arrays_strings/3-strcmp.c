/**
 * _strcmp - function that compare 2 string
 * @s1: first parameter
 * @s2: second parameter
 * Return: difference of the character in ASCI 0 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] < s2[index] || s1[index] > s2[index])
		{
			return (s1[index] - s2[index]);
		}
		else if (s2[index] < s1[index] || s2[index] > s1[index])
		{
			return (s2[index] - s1[index]);
		}
		else
		{
			index++;
		}
	}
	return (0);
}
