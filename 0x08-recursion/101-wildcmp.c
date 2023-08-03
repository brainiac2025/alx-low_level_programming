int wildcmp_h(char *s1, char *s2);

/**
 * wildcmp - function that call wildcmp_h
 * @s1: first parameter
 * @s2: second parameter
 * Return: result
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_h(s1, s2));
}

/**
 * wildcmp_h - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 for identical and 0 otherwise
 */
int wildcmp_h(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp_h(s1, s2 + 1));
		}

		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		return(wildcmp_h(s1, s2 + 1) ||
(*s1 != '\0' && wildcmp_h(s1 + 1, s2)));
	}

	if (*s1 == *s2)
	{
		return (wildcmp_h(s1 + 1, s2 + 1));
	}

	return (0);
}
